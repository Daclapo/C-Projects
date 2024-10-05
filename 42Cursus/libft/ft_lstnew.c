/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:09:51 by marvin            #+#    #+#             */
/*   Updated: 2024/10/05 18:35:45 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Error: ASSIGN_IN_CONTROL    (line:  19, col:  15):      Assignment in control structure

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}
