/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:10:46 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/04 16:40:27 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	res = ft_fibonacci(index -1) + ft_fibonacci(index - 2);
	return (res);
}
