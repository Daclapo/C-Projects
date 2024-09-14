/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:14:14 by dclarkso          #+#    #+#             */
/*   Updated: 2024/05/26 17:04:08 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	resultado;
	int	resto;

	resultado = a / b;
	*div = resultado;
	resto = a % b;
	*mod = resto;
}
