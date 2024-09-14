/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:28:56 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/05 19:00:44 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
