
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include "Libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_len_putstr_fd(char *s, int fd);
int	ft_len_put_nbase_fd(uintptr_t nbr, char *base);
int	ft_len_putnbr_fd(long int nbr, int fd);

#endif
