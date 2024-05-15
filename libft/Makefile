# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 18:27:44 by ensanche          #+#    #+#              #
#    Updated: 2024/05/15 16:27:25 by ensanche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		  ft_isdigit.c ft_isprint.c	ft_strchr.c ft_strlcat.c ft_strlcpy.c\
		  ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c\
		  ft_toupper.c ft_memchr.c ft_memset.c ft_memcpy.c ft_memmove.c\
		  ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c
		  
OBJECTS = $(SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror
all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?
%.o: %.c  
	$(CC) -c $(CFLAGS) $?
	
clean: 
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re