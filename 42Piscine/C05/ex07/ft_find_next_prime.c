/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:36:47 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/04 19:44:46 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb > 2147483640 && nb >= 2147483647)
		return (2147483647);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	printf("95 - %d\n", ft_find_next_prime(95));
	printf("1 - %d\n", ft_find_next_prime(1));
	printf("0 - %d\n", ft_find_next_prime(0));
	printf("8 - %d\n", ft_find_next_prime(8));
	printf("23 - %d\n", ft_find_next_prime(23));
	printf("24 - %d\n", ft_find_next_prime(24));
	printf("84 - %d\n", ft_find_next_prime(84));
	printf("400 - %d\n", ft_find_next_prime(400));
	printf("2147483641 - %d\n", ft_find_next_prime(2147483641));
	printf("71 - %d\n", ft_find_next_prime(71));
	printf("72 - %d\n", ft_find_next_prime(72));
}
*/
