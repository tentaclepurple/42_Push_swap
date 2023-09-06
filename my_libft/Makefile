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

NAME		= 	libft.a

SRCS		= 	libft/ft_memset.c \
				libft/ft_bzero.c \
				libft/ft_memcpy.c \
				libft/ft_memmove.c \
				libft/ft_memchr.c \
				libft/ft_memcmp.c \
				libft/ft_strlen.c \
				libft/ft_strlcpy.c \
				libft/ft_strlcat.c \
				libft/ft_strchr.c \
				libft/ft_strrchr.c \
				libft/ft_strnstr.c \
				libft/ft_strcmp.c \
				libft/ft_strncmp.c \
				libft/ft_atoi.c \
				libft/ft_isalpha.c \
				libft/ft_isdigit.c \
				libft/ft_isalnum.c \
				libft/ft_isascii.c \
				libft/ft_isprint.c \
				libft/ft_itoa.c \
				libft/ft_toupper.c \
				libft/ft_tolower.c \
				libft/ft_calloc.c \
				libft/ft_split.c \
				libft/ft_strdup.c \
				libft/ft_substr.c \
				libft/ft_strjoin.c \
				libft/ft_strtrim.c \
				libft/ft_strmapi.c \
				libft/ft_striteri.c \
				libft/ft_putchar_fd.c \
				libft/ft_putstr_fd.c \
				libft/ft_putendl_fd.c \
				libft/ft_putnbr_fd.c \
				libft/ft_lstnew_bonus.c	\
				libft/ft_lstadd_front_bonus.c	\
				libft/ft_lstadd_front_bonus.c	\
				libft/ft_lstsize_bonus.c	\
				libft/ft_lstlast_bonus.c	\
				libft/ft_lstadd_back_bonus.c	\
				libft/ft_lstdelone_bonus.c	\
				libft/ft_lstclear_bonus.c	\
				libft/ft_lstiter_bonus.c	\
				libft/ft_lstmap_bonus.c \
				gnl/get_next_line.c \
				gnl/get_next_line_utils.c \
				ft_printf/ft_printf.c \
				ft_printf/ft_strchr.c \
				ft_printf/ft_printnbr.c \
				ft_printf/ft_printnbru.c \
				ft_printf/ft_printstr.c \
				ft_printf/ft_printchar.c \
				ft_printf/ft_printhex.c \
				ft_printf/ft_printpointer.c \
				ft_printf/ft_printhexptr.c \
				ft_printf/ft_strlen.c \
				ft_printf/ft_formatspec.c \
				ft_printf/ft_checkerror.c \


OBJS		= $(SRCS:%.c=%.o)

FLAGS		= -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) *.o 

all: $(NAME)

clean:
	rm -f $(OBJS) *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
