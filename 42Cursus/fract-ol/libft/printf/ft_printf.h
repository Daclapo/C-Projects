/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:05:49 by dclarkso          #+#    #+#             */
/*   Updated: 2024/11/18 13:06:03 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *format, ...);
void	ft_putnbr(int nbr, int *count);
void	print_base(unsigned long long n, char *base, int base_len, int *count);
void	ft_putstr(char *str, int *count);

#endif
