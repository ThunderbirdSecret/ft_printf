# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsecret <tsecret@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/24 16:37:37 by tsecret           #+#    #+#              #
#    Updated: 2020/07/27 16:30:51 by tsecret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_atoi.c ft_hex.c ft_isdigit.c ft_itoa.c ft_pointer.c\
		ft_precision.c ft_printf.c ft_strlen.c ft_toupper.c\
		ft_utoa.c ft_width.c pars_flag.c parse_str.c print_c.c\
		print_int.c print_str.c

CFLAGS =  -Wall -Wextra -Werror

HEADER = ft_printf.h

FILES_O = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(FILES_O)
	ar rcs $(NAME) $(FILES_O)

%.o: %.c $(HEADER)
	@gcc $(CFLAGS) -с $< -o $@

clean:
	@rm -f $(FILES_O)

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean all re

re: fclean all
