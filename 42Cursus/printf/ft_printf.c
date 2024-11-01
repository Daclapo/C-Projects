/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:25:37 by dclarkso          #+#    #+#             */
/*   Updated: 2024/11/01 16:54:00 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	process_char(char const *fstr, va_list args, int *count)
{
	int	aux;

	if (*fstr == 'c')
	{
		aux = va_arg(args, int);
		*count += write(1, &aux, 1);
	}
	else if (*fstr == 's')
		ft_putstr(va_arg(args, char *), count);
}

static void	process_nbr(char const *fstr, va_list args, int *count)
{
	if (*fstr == 'd' || *fstr == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (*fstr == 'u')
		print_base(va_arg(args, unsigned int), "0123456789", 10, count);
	else if (*fstr == 'x')
		print_base(va_arg(args, unsigned int), "0123456789abcdef", 16, count);
	else if (*fstr == 'X')
		print_base(va_arg(args, unsigned int), "0123456789ABCDEF", 16, count);
}

static void	process_ptr(char const *fstr, va_list args, int *count)
{
	unsigned long long	addr;

	if (*fstr == 'p')
	{
		addr = va_arg(args, unsigned long long);
		if (addr == 0)
		{
			*count += write(1, "(nil)", 5);
			return ;
		}
		*count += write(1, "0x", 2);
		print_base(addr, "0123456789abcdef", 16, count);
	}
}

static void	parse_format(char const *fstr, va_list args, int *count)
{
	if (*fstr == 'c' || *fstr == 's')
		process_char(fstr, args, count);
	else if (*fstr == 'p')
		process_ptr(fstr, args, count);
	else if (*fstr == 'd' || *fstr == 'i' || *fstr == 'u'
		|| *fstr == 'x' || *fstr == 'X')
		process_nbr(fstr, args, count);
	else if (*fstr == '%')
		*count += write(1, "%", 1);
}

int	ft_printf(char const *fstr, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, fstr);
	while (*fstr)
	{
		if (*fstr == '%' && *(fstr + 1))
			parse_format(++fstr, args, &count);
		else
			count += write(1, fstr, 1);
		++fstr;
	}
	va_end(args);
	return (count);
}
