NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
src = ft_printf.c ft_print_format.c ft_putstr.c ft_putchar.c ft_putnbr_hexa.c ft_putnbr.c ft_putu.c

RM = rm -rf

OBJ = $(src:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re:	fclean all