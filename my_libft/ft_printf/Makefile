# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imontero <imontero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 19:35:16 by imontero          #+#    #+#              #
#    Updated: 2023/04/19 19:35:16 by imontero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_printf.a

SRCS		= 	ft_printf.c \
				ft_strchr.c \
				ft_printnbr.c \
				ft_printnbru.c \
				ft_printstr.c \
				ft_printchar.c \
				ft_printhex.c \
				ft_printpointer.c \
				ft_printhexptr.c \
				ft_strlen.c \
				ft_formatspec.c \
				ft_checkerror.c \

OBJS		= $(SRCS:%.c=%.o)

FLAGS		= -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS) 

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
