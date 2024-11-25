/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:54:40 by dclarkso          #+#    #+#             */
/*   Updated: 2024/11/24 15:16:13 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

char	*get_next_line(int fd);

char	*ft_strdup(char *str);
size_t	ft_strlen(char *str);
char	*ft_substr(char *str, unsigned int start, size_t len);
char	*ft_strjoin(char *str1, char *str2);
void	fill_str(char *res, char *str1, char *str2);
char	*fill_line_buffer(int fd, char *left_c, char *buffer);
char	*set_line(char *line_buffer);
char	*ft_strchr(char *haystack, int needle);

#endif
