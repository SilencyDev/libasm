# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 09:56:23 by kmacquet          #+#    #+#              #
#    Updated: 2021/03/23 16:19:14 by kmacquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
CC = nasm -fmacho64
SRCS = ft_strlen.s ft_strcpy.s ft_strcmp \
		ft_strdup.s
OBJS = $(SRCS:.s=.o)
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $@ $(OBJS)

.s.o :
	$(CC) -o $@ $?

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY:	all clean fclean re
