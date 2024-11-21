/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    get_next_line_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:54:32 by dclarkso          #+#    #+#             */
/*   Updated: 2024/11/21 12:08:50 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			counter;

	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	counter = 0;
	while (counter < count * size)
	{
		mem[counter] = 0;
		counter++;
	}
	return (mem);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	if (!s1 && !s2)
		return (0);
	while (s1 && s1[len])
		len++;
	while (s2 && s2[len])
		len++;
	str = ft_calloc(len + i + 1, sizeof * str);
	if (!str)
		return (0);
	len = -1;
	while (s1 && s1[++len])
		str[len] = s1[len];
	i = -1;
	while (s2 && s2[++i])
		str[len + i] = s2[i];
	return (str);
}

char	*ft_strdup(char *str1)
{
	char	*str2;
	int		i;
	int		len;

	i = 0;
	if (!str1)
		return ("");
	len = 0;
	while (str1[len])
		len++;
	str2 = ft_calloc(len + 1, sizeof(char));
	if (!str2)
		return (0);
	while (str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

void	free_str(char **str1, char **str2, char **str3)
{
	if (str1 && *str1)
	{
		free(*str1);
		*str1 = NULL;
	}
	if (str2 && *str2)
	{
		free(*str2);
		*str2 = NULL;
	}
	if (str3 && *str3)
	{
		free(*str3);
		*str3 = NULL;
	}
}
