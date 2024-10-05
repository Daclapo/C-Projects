/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:58:04 by marvin            #+#    #+#             */
/*   Updated: 2024/10/05 13:58:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
   size_t i;

   if (!dst && !src)
      return (0);
   i = 0;
   if ((size_t)dst - (size_t)src < len)
   {
      i = len - 1;
      while (i >= 0 && i < len)
      {
         ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
         i--;
      }
   }
   else
   {
      while (i < len)
      {
         ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
         i++;
      }
   }
   return (dst);
}