/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:00:25 by marvin            #+#    #+#             */
/*   Updated: 2024/10/05 14:00:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
   size_t i;

   if (!s1 || !set)
      return (0);
   while (*s1 && ft_strchr(set, *s1))
      s1++;
   i = ft_strlen(s1);
   while (i && ft_strchr(set, s1[i]))
      i--;
   return (ft_substr(s1, 0, i + 1));
}