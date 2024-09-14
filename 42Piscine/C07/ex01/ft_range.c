/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:33:15 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/12 12:38:46 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	i;

	ret = NULL;
	if (min >= max)
		return (NULL);
	ret = malloc(sizeof(int) * (max - min));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		ret[i] = min + i;
		i++;
	}
	return (ret);
}
