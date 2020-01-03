# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/26 16:29:07 by sventas-          #+#    #+#              #
#    Updated: 2020/01/03 11:04:58 by sventas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_analyse_args.c ft_conv_char.c ft_conv_str.c\
ft_width.c ft_flags.c ft_precision.c ft_spaces.c ft_final_print.c\
ft_conv_d.c ft_conv_u.c ft_conv_hex.c\
libft/ft_strlen.c libft/ft_atoi.c libft/ft_isdigit.c libft/ft_substr.c\
libft/ft_itoa.c libft/ft_strjoin.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

LIB = libprintf.h
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
all : ${NAME}

.c.o : ${LIB}
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}


clean:
			${RM} ${OBJS}
fclean: clean
			${RM} ${NAME}
re : fclean all
	#${CC} ${NAME}


