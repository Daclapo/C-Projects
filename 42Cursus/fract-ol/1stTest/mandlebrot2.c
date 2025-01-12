#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <MLX42/MLX42.h>
#include <math.h>

// #define WIDTH 512
// #define HEIGHT 512
#define WIDTH 1024
#define HEIGHT 1024

static mlx_image_t *image;

// Variables globales para controlar el zoom y desplazamiento
static double zoom = 1.0;
static double offsetX = -0.5;
static double offsetY = 0.0;

void ft_draw_mandelbrot(void)
{
	const int max_iterations = 100;

	for (uint32_t px = 0; px < image->width; ++px)
	{
		for (uint32_t py = 0; py < image->height; ++py)
		{
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

			uint32_t color;
			if (iteration == max_iterations)
			{
				color = 0x000000FF; // Negro
			}
			else
			{
				int brightness = (int)(255.0 * iteration / max_iterations);
				color = (brightness << 24) | (brightness << 16) | (brightness << 8) | 0xFF;
			}
			mlx_put_pixel(image, px, py, color);
		}
	}
}

void ft_hook(void *param)
{
	mlx_t *mlx = param;

	// Salir con ESC
	if (mlx_is_key_down(mlx, MLX_KEY_ESCAPE))
		mlx_close_window(mlx);

	// Zoom in con tecla W
	if (mlx_is_key_down(mlx, MLX_KEY_W))
	{
		zoom *= 1.1;
		ft_draw_mandelbrot();
	}

	// Zoom out con tecla S
	if (mlx_is_key_down(mlx, MLX_KEY_S))
	{
		zoom /= 1.1;
		ft_draw_mandelbrot();
	}

	// Desplazamiento: teclas de dirección
	double move_step = 0.1 / zoom;
	if (mlx_is_key_down(mlx, MLX_KEY_UP))
	{
		offsetY -= move_step;
		ft_draw_mandelbrot();
	}
	if (mlx_is_key_down(mlx, MLX_KEY_DOWN))
	{
		offsetY += move_step;
		ft_draw_mandelbrot();
	}
	if (mlx_is_key_down(mlx, MLX_KEY_LEFT))
	{
		offsetX -= move_step;
		ft_draw_mandelbrot();
	}
	if (mlx_is_key_down(mlx, MLX_KEY_RIGHT))
	{
		offsetX += move_step;
		ft_draw_mandelbrot();
	}
}

int32_t main(void)
{
	mlx_t *mlx;

	// Inicializamos la ventana
	if (!(mlx = mlx_init(WIDTH, HEIGHT, "Mandelbrot Zoom", true)))
	{
		puts(mlx_strerror(mlx_errno));
		return (EXIT_FAILURE);
	}
	if (!(image = mlx_new_image(mlx, WIDTH, HEIGHT)))
	{
		mlx_close_window(mlx);
		puts(mlx_strerror(mlx_errno));
		return (EXIT_FAILURE);
	}
	if (mlx_image_to_window(mlx, image, 0, 0) == -1)
	{
		mlx_close_window(mlx);
		puts(mlx_strerror(mlx_errno));
		return (EXIT_FAILURE);
	}

	// Dibujamos el Mandelbrot inicial
	ft_draw_mandelbrot();

	// Configuramos el hook para controles
	mlx_loop_hook(mlx, ft_hook, mlx);

	mlx_loop(mlx);
	mlx_terminate(mlx);
	return (EXIT_SUCCESS);
}
