NAME=libft.a
CC=clang
CFLAGS=-Wall -Wextra -Werror

SRC=*.c

OBJ=*.o

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
