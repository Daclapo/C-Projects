/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclarkso <dclarkso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:55:17 by dclarkso          #+#    #+#             */
/*   Updated: 2024/10/11 18:57:05 by dclarkso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
// #include "ft_printf.h"

int     printf(const char *format, ...)
{
    va_list args;
    int     ret;

    va_start(args, format);
    ret = ft_vprintf(format, args);
    va_end(args);
    return (ret);
}