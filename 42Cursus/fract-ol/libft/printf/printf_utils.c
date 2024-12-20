/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:47:50 by dclarkso          #+#    #+#             */
/*   Updated: 2024/11/01 16:29:45 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_base(unsigned long long n, char *base, int base_len, int *count)
{
	char	num;

	if (n >= (unsigned long long)base_len)
		print_base(n / base_len, base, base_len, count);
	num = base[n % base_len];
	*count += write(1, &num, 1);
}

void	ft_putnbr(int nbr, int *count)
{
	long long int	n;

	n = nbr;
	if (n < 0)
	{
		*count += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10, count);
	*count += write(1, &"0123456789"[n % 10], 1);
}

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		*count += write(1, "(null)", 6);
		return ;
	}
	while (str[i])
	{
		*count += write(1, &str[i], 1);
		i++;
	}
}
