/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:58:24 by marvin            #+#    #+#             */
/*   Updated: 2024/10/05 13:58:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
   ft_putstr_fd(s, fd);
   ft_putchar_fd('\n', fd);
}