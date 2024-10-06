/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:46:16 by dclarkso          #+#    #+#             */
/*   Updated: 2024/10/06 20:19:32 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	ft_number_size(int number)
{
	unsigned int	length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		length += 1;
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	number;
	unsigned int	length;

	length = ft_number_size(n);
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (n == 0)
		string[0] = '0';
	string[length] = '\0';
	while (number != 0)
	{
		string[length - 1] = (number % 10) + '0';
		number = number / 10;
		length--;
	}
	return (string);
}
