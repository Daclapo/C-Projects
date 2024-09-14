/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:22:03 by dclarkso          #+#    #+#             */
/*   Updated: 2024/06/11 11:22:30 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) (((Value) + \
                     ((Value) >> (sizeof(Value) * 8 - 1))) ^ \
                    ((Value) >> (sizeof(Value) * 8 - 1)))
# define ABS(Value) (Value * (Value > 0) + (Value * -(Value < 0)))
#endif