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

NAME		= get_next_line.a

SRCS		= 	get_next_line.c \
				get_next_line_utils.c \
				
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
