/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:36:25 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/12 14:31:12 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	seplen;
	int	totallen;

	i = 0;
	seplen = ft_strlen(sep);
	totallen = 0;
	while (i < size)
	{
		totallen += ft_strlen(strs[i]);
		if (i < size - 1)
			totallen += seplen;
		i++;
	}
	return (totallen);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*text;
	int		i;
	int		totallen;

	i = 0;
	totallen = ft_total_size(size, strs, sep) + 1;
	text = malloc(sizeof(char) * totallen);
	if (!text)
		return (NULL);
	*text = '\0';
	while (i < size)
	{
		ft_strcat(text, strs[i]);
		if (i < size - 1)
			ft_strcat(text, sep);
		i++;
	}
	return (text);
}
