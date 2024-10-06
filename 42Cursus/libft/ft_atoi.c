/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:18:49 by dclarkso          #+#    #+#             */
/*   Updated: 2024/10/06 18:03:15 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ignore_spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || \
	str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	result;

	neg = 1;
	result = 0;
	i = ignore_spaces(str);
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
		if (result * neg > 2147483647)
			return (-1);
		if (result * neg < -2147483648)
			return (0);
	}
	result = result * neg;
	return ((int)result);
}
