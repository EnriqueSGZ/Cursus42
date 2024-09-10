# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 18:04:21 by ensanche          #+#    #+#              #
#    Updated: 2024/09/10 18:06:44 by ensanche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

CFILES = ft_printf.c ft_print_char.c ft_print_str.c ft_print_dig.c \
ft_print_unsigned.c ft_print_hexlow.c ft_print_hexup.c ft_print_ptr.c \

OFILES = $(CFILES:.c=.o)

NAME = libftprintf.a

#rules
all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)