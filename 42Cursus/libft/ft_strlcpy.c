/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 19:49:27 by dclarkso          #+#    #+#             */
/*   Updated: 2024/10/05 20:36:02 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	calcreturn(const char	*src)
{
	size_t	c;

	c = 0;
	while (src[c] != 0)
		c++;
	return (c);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	c;

	c = 0;
	if (!src)
		return (0);
	if (n == 0)
	{
		return (calcreturn(src));
	}
	while (c < n - 1)
	{
		if (src[c] == 0)
			break ;
		dst[c] = src[c];
		c++;
	}
	dst[c] = 0;
	return (calcreturn(src));
}