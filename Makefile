NAME=libft.a
CC=clang
CFLAGS=-Wall -Wextra -Werror

SRC=ft_atoi.c ft_atoi.c

OBJ=ft_atoi.o ft_itoa.o

all: $(NAME)

$(NAME): $(OBJ)
	ar rs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	-rm *.o

fclean:
	-rm *.o
	-rm libft.a

re:
	-rm *.o
	-rm libft.a
	make all
