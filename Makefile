NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
SRCS = push_swap.c operation.c operation_1.c ft_split.c ft_atisd.c ft_stack.c ft_sort.c utils.c
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

.PHONY: clean fclean re all bonus
