/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:11:12 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/08 17:11:18 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha_numeric(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (is_alpha_numeric(str[i]))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = to_upper(str[i]);
			else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = to_lower(str[i]);
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
