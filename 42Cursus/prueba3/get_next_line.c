/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:13:13 by dclarkso          #+#    #+#             */
/*   Updated: 2024/11/24 15:47:48 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*set_line(char *line_buffer)
{
	char	*remaining_chars;
	ssize_t	i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0)
		return (0);
	remaining_chars = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (*remaining_chars == 0)
	{
		free(remaining_chars);
		remaining_chars = NULL;
	}
	line_buffer[i + 1] = 0;
	return (remaining_chars);
}

char	*fill_line_buffer(int fd, char *remaining_chars, char *buffer)
{
	ssize_t	buff_read;
	char	*tmp;

	buff_read = 1;
	while (buff_read > 0)
	{
		buff_read = read(fd, buffer, BUFFER_SIZE);
		if (buff_read == -1)
		{
			free(remaining_chars);
			return (0);
		}
		else if (buff_read == 0)
			break ;
		buffer[buff_read] = 0;
		if (!remaining_chars)
			remaining_chars = ft_strdup("");
		tmp = remaining_chars;
		remaining_chars = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (remaining_chars);
}

char	*ft_strchr(char *haystack, int needle)
{
	unsigned int	i;
	char			c;

	c = (char) needle;
	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == c)
			return ((char *) &haystack[i]);
		i++;
	}
	if (haystack[i] == c)
		return ((char *) &haystack[i]);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*remaining_chars;
	char		*line;
	char		*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(remaining_chars);
		free(buffer);
		remaining_chars = NULL;
		buffer = NULL;
		return (0);
	}
	if (!buffer)
		return (NULL);
	line = fill_line_buffer(fd, remaining_chars, buffer);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	remaining_chars = set_line(line);
	return (line);
}
