/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:49:20 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/12 12:35:33 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		srclen;

	srclen = 0;
	while (src[srclen])
		srclen++;
	dest = NULL;
	dest = malloc(sizeof(char) * (srclen + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
