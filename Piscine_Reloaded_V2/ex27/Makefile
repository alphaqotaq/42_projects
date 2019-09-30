# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmila <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 12:06:47 by kmila             #+#    #+#              #
#    Updated: 2019/09/06 17:05:47 by kmila            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

all:
	@gcc -c main.c ft_func.c -Wall -Wextra -Werror
	@gcc -o $(NAME) main.o ft_func.o

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
