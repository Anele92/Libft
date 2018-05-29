# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoroita <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/29 13:05:56 by anoroita          #+#    #+#              #
#    Updated: 2018/05/29 13:27:30 by anoroita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SHARED = libft.so

SRCS = *.c

OBJ = *.o

all:
	gcc -c -Wall -Wextra -Werror $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME) $(SHARED)

re: fclean all
