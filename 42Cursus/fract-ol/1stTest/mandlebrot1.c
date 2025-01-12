#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <MLX42/MLX42.h>
#include <math.h>

#define WIDTH 512
#define HEIGHT 512

static mlx_image_t* image;

// -----------------------------------------------------------------------------

int32_t ft_pixel(int32_t r, int32_t g, int32_t b, int32_t a)
{
    return (r << 24 | g << 16 | b << 8 | a);
}

void ft_draw_mandelbrot(void* param)
{
    (void)param; // No necesitamos este argumento
    const int max_iterations = 100; // Número máximo de iteraciones
    const double zoom = 1.0;        // Zoom inicial
    const double offsetX = -0.5;    // Desplazamiento en X
    const double offsetY = 0.0;     // Desplazamiento en Y

    for (uint32_t px = 0; px < image->width; ++px)
    {
        for (uint32_t py = 0; py < image->height; ++py)
        {
            // Mapeamos cada píxel a un número complejo (c)
            double x0 = ((double)px / image->width - 0.5) * 4.0 / zoom + offsetX;
            double y0 = ((double)py / image->height - 0.5) * 4.0 / zoom + offsetY;

            double x = 0.0;
            double y = 0.0;
            int iteration = 0;

            while (x * x + y * y <= 4.0 && iteration < max_iterations)
            {
                double xtemp = x * x - y * y + x0;
                y = 2 * x * y + y0;
                x = xtemp;
                iteration++;
            }

            // Determinamos el color según el número de iteraciones
            uint32_t color;
            if (iteration == max_iterations)
            {
                color = ft_pixel(0, 0, 0, 255); // Color negro para los puntos dentro del conjunto
            }
            else
            {
                int brightness = (int)(255.0 * iteration / max_iterations);
                color = ft_pixel(brightness, brightness, brightness, 255); // Escala de grises
            }
            mlx_put_pixel(image, px, py, color);
        }
    }
}

void ft_hook(void* param)
{
    mlx_t* mlx = param;

    if (mlx_is_key_down(mlx, MLX_KEY_ESCAPE))
        mlx_close_window(mlx);
}

// -----------------------------------------------------------------------------

int32_t main(void)
{
    mlx_t* mlx;

    // Gotta error check this stuff
    if (!(mlx = mlx_init(WIDTH, HEIGHT, "Mandelbrot Set", true)))
    {
        puts(mlx_strerror(mlx_errno));
        return(EXIT_FAILURE);
    }
    if (!(image = mlx_new_image(mlx, WIDTH, HEIGHT)))
    {
        mlx_close_window(mlx);
        puts(mlx_strerror(mlx_errno));
        return(EXIT_FAILURE);
    }
    if (mlx_image_to_window(mlx, image, 0, 0) == -1)
    {
        mlx_close_window(mlx);
        puts(mlx_strerror(mlx_errno));
        return(EXIT_FAILURE);
    }
    
    ft_draw_mandelbrot(NULL); // Dibujamos el conjunto de Mandelbrot una vez al inicio

    mlx_loop_hook(mlx, ft_hook, mlx);

    mlx_loop(mlx);
    mlx_terminate(mlx);
    return (EXIT_SUCCESS);
}
