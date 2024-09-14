/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:13:50 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/05 10:33:50 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power)
{
	if (!power)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	if (nb > 0)
	{
		while (sqr <= 46360)
		{
			if (ft_power(sqr, 2) == nb)
				return (sqr);
			sqr++;
		}
	}
	return (0);
}
