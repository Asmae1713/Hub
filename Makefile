# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asbouani <asbouani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 16:27:14 by asbouani          #+#    #+#              #
#    Updated: 2025/03/08 15:24:23 by asbouani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
SRCS = mandatory/push_swap.c mandatory/operation.c mandatory/operation_1.c mandatory/ft_sort.c \
	   mandatory/ft_split.c mandatory/ft_utils.c mandatory/ft_stack.c mandatory/ft_utils_1.c
BSRCS = 
OBJS = ${SRCS:.c=.o}
BOBJS = ${BSRCS:.c=.o}
HEADER = mandatory/push_swap.h
HEADER_B =

all: ${NAME}

mandatory/%.o: mandatory/%.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

bonus/%.o: bonus/%.c ${HEADER_B}
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS} 
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

bonus : ${BOBJS} 
	${CC} ${CFLAGS} ${BOBJS} -o ${NAME}

clean:
	rm -f ${OBJS} ${BOBJS}


fclean: clean
	rm -f ${NAME}


re: fclean all

.PHONY: clean