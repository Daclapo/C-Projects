/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:37:41 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/05 10:31:51 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	numorg;

	numorg = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power >= 2)
	{
		nb = nb * numorg;
		power--;
	}
	return (nb);
}
