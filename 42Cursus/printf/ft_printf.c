/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:25:37 by dclarkso          #+#    #+#             */
/*   Updated: 2024/10/19 20:51:28 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
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

int	ft_putnbr(int nb)
{
	int	num_len;

	num_len = 0;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		num_len = 11;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
		num_len = 1;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		num_len++;
	}
	else
		ft_putchar(nb + '0');
		num_len++;
	return (num_len);
}

int	conversion(va_list args, const char type_indicator)
{
	int	n_printed_chars;

	n_printed_chars = 0;
	if (type_indicator == 'c')
		n_printed_chars += ft_putchar(va_arg(args, int));
	else if (type_indicator == 's')
		n_printed_chars += ft_putstr(va_arg(args, char *));

	// %p El puntero void * dado como argumento se imprime en formato hexadecimal:
	else if (type_indicator == 'p')
		n_printed_chars += ft_putstr(va_arg(args, char *));

	// %d Imprime un número decimal (base 10). %i Imprime un entero en base 10.
	else if (type_indicator == 'd' || type_indicator == 'i')
		n_printed_chars += ft_putnbr(va_arg(args, int));

	// %u Imprime un número decimal (base 10) sin signo.
	else if (type_indicator == 'u')
		n_printed_chars += ft_putstr(va_arg(args, unsigned int));

	// %x Imprime un número hexadecimal (base 16) en minúsculas. %X Imprime un número hexadecimal (base 16) en mayúsculas.
	else if (type_indicator == 'x' || type_indicator == 'X')
		n_printed_chars += ft_putstr(va_arg(args, unsigned int));
	else if (type_indicator == '%')
		n_printed_chars += ft_putchar('%');
	return (n_printed_chars);
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
