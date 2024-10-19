/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:25:37 by dclarkso          #+#    #+#             */
/*   Updated: 2024/10/19 17:28:23 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	conversion(va_list args, const char type_indicator)
{
	int	char_to_print;
	int	char_to_print;

	char_to_print = 0;
	if (type_indicator == 'c')
		char_to_print += putchar(va_arg(args, int));
	else if (type_indicator == 's')
		char_to_print += putstr(va_arg(args, char *));
	// Crear la funcion adecuada
	else if (type_indicator == 'p')
		char_to_print += putstr(va_arg(args, char *));
	// Crear la funcion adecuada
	else if (type_indicator == 'd' || type_indicator == 'i')
		char_to_print += putstr(va_arg(args, char *));
	// Crear la funcion adecuada
	else if (type_indicator == 'u')
		char_to_print += putstr(va_arg(args, char *));
	// Crear la funcion adecuada
	else if (type_indicator == 'x' || type_indicator == 'X')
		char_to_print += putstr(va_arg(args, char *));
	else if (type_indicator == '%')
		char_to_print += putchar('%');
	return (char_to_print);
}

int	printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		char_to_print;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			char_to_print = coversion(args, format[i + 1]);
			i++;
		}
		else
			char_to_print = ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (char_to_print);
}
