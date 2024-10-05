/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:44:42 by dclarkso          #+#    #+#             */
/*   Updated: 2024/10/05 18:33:50 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Error: ASSIGN_IN_CONTROL    (line:  21, col:  15):      Assignment in control structure

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		tot_size;
	void		*dst;

	tot_size = size * count;
	if (!(dst = malloc(tot_size)))
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
