/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:14:24 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/04 16:34:08 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putline(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_sort_params(int argc, char *argv[])
{
	char	*temp;
	int		i;

	i = 1;
	while (i < argc -1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
		ft_putline(argv[i++]);
	return (0);
}
// ./a.out "u" "b" "d" "e" "c" "l" "z" "q" "r" "j" "x" "v"
// "n" "w" "h" "m" "f" "t" "p" "k" "i" "g" "o" "s" "a" "y"
