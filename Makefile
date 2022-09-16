FILES = ft_printf.c \
		fuctions.c \
		fuctions2.c \
OBJS = $(FILES:.c=.o)

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

LIB = libftprintf.h

all: $(NAME)

$(NAME): $(OBJS) $(LIB)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(FILES) $(LIB)
	gcc $(FLAGS) -c $(FILES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
