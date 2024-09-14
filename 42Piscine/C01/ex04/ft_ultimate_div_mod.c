/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:05:43 by dclarkso          #+#    #+#             */
/*   Updated: 2024/05/26 17:09:09 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resultado;
	int	resto;

	resultado = *a / *b;
	resto = *a % *b;
	*a = resultado;
	*b = resto;
}
