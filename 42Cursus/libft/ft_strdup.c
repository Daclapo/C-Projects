/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:59:18 by marvin            #+#    #+#             */
/*   Updated: 2024/10/05 13:59:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strdup(const char *s1)
{
   char *s2;

   if (!(s2 = (char *)malloc(ft_strlen(s1) + 1)))
      return (0);
   ft_memcpy(s2, s1, ft_strlen(s1) + 1);
   return (s2);
}