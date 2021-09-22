# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/08 21:20:23 by tpopescu          #+#    #+#              #
#    Updated: 2021/09/22 21:30:15 by tpopescu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_itoa.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_strdup.c ft_calloc.c ft_atoi.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memmove.c ft_memcpy.c ft_bzero.c ft_memset.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_substr.c ft_strlen.c ft_strjoin.c ft_strnstr.c ft_split.c ft_isalpha.c ft_strtrim.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS}
	ar -crs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
