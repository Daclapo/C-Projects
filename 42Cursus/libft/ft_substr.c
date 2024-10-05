/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:00:27 by marvin            #+#    #+#             */
/*   Updated: 2024/10/05 14:00:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
   char *new_str;
   size_t i;
   size_t j;

   if (!s || !(new_str = (char *)malloc(len + 1)))
      return (0);
   i = start;
   j = 0;
   while (i < ft_strlen(s) && j < len)
      new_str[j++] = s[i++];
   new_str[j] = '\0';
   return (new_str);
}