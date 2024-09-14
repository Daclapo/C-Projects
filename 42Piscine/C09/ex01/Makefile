# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dclarkso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 20:47:54 by dclarkso          #+#    #+#              #
#    Updated: 2024/06/12 21:06:17 by dclarkso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRCS_DIR = ./srcs/

SRCS = $(addprefix $(SRCS_DIR), $(SRC))

SRCS_OBJ = $(SRCS:.c=.o)

HEADER_DIR = ./includes/

CC = cc

CFLAGS = -Wall -Wextra -Werror

OUTPUT = libft.a

all : $(OUTPUT)

.c.o:
	${CC} ${CFLAGS} -I ${HEADER_DIR} -c $< -o ${<:.c=.o}

$(OUTPUT) : $(SRCS_OBJ)
	ar rc $(OUTPUT) $(SRCS_OBJ)

clean :
	rm -f $(SRCS_OBJ)

fclean : clean
	rm -f $(OUTPUT)

re : fclean all
