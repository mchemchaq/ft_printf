SRCS  = print_char.c \
		print_str.c \
		print_nbr.c \
		print_hexa_lower.c \
		print_hexa_upper.c \
		print_ptr.c \
		print_nbr_u.c \
		print_nbr.c \
		ft_printf.c


NAME = libftprintf.a
LIBC = ar -rc
OBJS = ${SRCS:.c=.o}
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean