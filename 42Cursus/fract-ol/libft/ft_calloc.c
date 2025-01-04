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

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	counter;

	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	counter = 0;
	while (counter < count * size)
	{
		memory[counter] = 0;
		counter++;
	}
	return (memory);
}
