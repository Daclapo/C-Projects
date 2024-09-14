/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:42:00 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/08 16:45:44 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	ft_putchar(char c);
void	ft_print_combn_recursive(int n, int prev, int depth, char *buffer);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_recursive(int n, int prev, int depth, char *buffer)
{
	int	i;

	if (depth == n)
	{
		write(1, buffer, n);
		if (buffer[0] != '9' - n + 1)
			write(1, ", ", 2);
		return ;
	}
	i = prev + 1;
	while (i <= 9)
	{
		buffer[depth] = '0' + i;
		ft_print_combn_recursive(n, i, depth + 1, buffer);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	buffer[10];

	if (n > 0 && n < 10)
		ft_print_combn_recursive(n, -1, 0, buffer);
}
