/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:45:59 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/12 17:21:58 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	conversion(unsigned int nbr, char *base, unsigned int len)
{
	if (nbr >= len)
		conversion(nbr / len, base, len);
	ft_putchar(base[nbr % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	num;

	if (nbr < 0)
	{
		ft_putchar('-');
		num = nbr * (-1);
	}
	else
		num = nbr;
	conversion(num, base, ft_strlen(base));
	write(1, "\n", 1);
}

#include <stdio.h>
int	main(void)
{
	ft_putnbr_base(-128, "0123456789ABCDEF");
	ft_putnbr_base(-2147483648, "0123456789");
}
