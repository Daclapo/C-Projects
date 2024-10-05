/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:59:48 by marvin            #+#    #+#             */
/*   Updated: 2024/10/05 13:59:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
   char *str;
   unsigned int i;

   if (!s || !f || !(str = ft_strdup(s)))
      return (0);
   i = 0;
   while (str[i])
   {
      str[i] = f(i, str[i]);
      i++;
   }
   return (str);
}