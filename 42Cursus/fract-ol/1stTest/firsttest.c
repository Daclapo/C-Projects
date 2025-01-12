#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <MLX42/MLX42.h>

#define WIDTH 512
#define HEIGHT 512

static mlx_image_t* image;

// -----------------------------------------------------------------------------

int32_t ft_pixel(int32_t r, int32_t g, int32_t b, int32_t a)
{
    return (r << 24 | g << 16 | b << 8 | a);
}

void ft_draw_gradient(void* param)
{
    (void)param; // No necesitamos este argumento en esta función
    for (uint32_t x = 0; x < image->width; ++x)
    {
        for (uint32_t y = 0; y < image->height; ++y)
        {
            // Calculamos el color como un degradado basado en la posición
            uint32_t color = ft_pixel(
                x * 255 / image->width,  // R: varía según la posición x
                y * 255 / image->height, // G: varía según la posición y
                128,                     // B: constante
                255                      // A: completamente opaco
            );
            mlx_put_pixel(image, x, y, color);
        }
    }
}

void ft_hook(void* param)
{
    mlx_t* mlx = param;

    if (mlx_is_key_down(mlx, MLX_KEY_ESCAPE))
        mlx_close_window(mlx);
    if (mlx_is_key_down(mlx, MLX_KEY_UP))
        image->instances[0].y -= 5;
    if (mlx_is_key_down(mlx, MLX_KEY_DOWN))
        image->instances[0].y += 5;
    if (mlx_is_key_down(mlx, MLX_KEY_LEFT))
        image->instances[0].x -= 5;
    if (mlx_is_key_down(mlx, MLX_KEY_RIGHT))
        image->instances[0].x += 5;
}

// -----------------------------------------------------------------------------

int32_t main(void)
{
    mlx_t* mlx;

    // Gotta error check this stuff
    if (!(mlx = mlx_init(WIDTH, HEIGHT, "MLX42", true)))
    {
        puts(mlx_strerror(mlx_errno));
        return(EXIT_FAILURE);
    }
    if (!(image = mlx_new_image(mlx, 256, 256)))
    {
        mlx_close_window(mlx);
        puts(mlx_strerror(mlx_errno));
        return(EXIT_FAILURE);
    }
    if (mlx_image_to_window(mlx, image, 128, 128) == -1)
    {
        mlx_close_window(mlx);
        puts(mlx_strerror(mlx_errno));
        return(EXIT_FAILURE);
    }
    
    ft_draw_gradient(NULL); // Dibujamos el degradado una sola vez al inicio

    mlx_loop_hook(mlx, ft_hook, mlx);

    mlx_loop(mlx);
    mlx_terminate(mlx);
    return (EXIT_SUCCESS);
}
