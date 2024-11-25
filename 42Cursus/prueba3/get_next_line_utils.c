/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    get_next_line_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:54:32 by dclarkso          #+#    #+#             */
/*   Updated: 2024/11/24 15:16:37 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *str1)
{
	char			*dest;
	unsigned int	i;

	dest = (char *) malloc(ft_strlen(str1) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		dest[i] = str1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		return (malloc(1));
	if (len > ft_strlen(str + start))
		len = ft_strlen(str + start);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = str[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char			*result;

	result = (char *) malloc((ft_strlen(str1) + ft_strlen(str2) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	fill_str(result, str1, str2);
	return (result);
}

void	fill_str(char *result, char *str1, char *str2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str1[j])
		result[i++] = str1[j++];
	j = 0;
	while (str2[j])
		result[i++] = str2[j++];
	result[i] = '\0';
}
