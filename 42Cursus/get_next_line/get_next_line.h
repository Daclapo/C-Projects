/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:54:40 by dclarkso          #+#    #+#             */
/*   Updated: 2024/11/18 13:06:06 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h> // Para open(); int open (const char* path, int flags [,int mode ]);
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);

#endif