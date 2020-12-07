NAME=demineur
FLAGS=-Werror -Wall -Wextra -o play -I include -L lib -l SDL2-2.0.0

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) *.cpp -o $(NAME)

run: $(NAME)
		./$(NAME)

clean:
	rm -f *.o
	rm -rf *.dSYM

fclean: clean
	rm -f $(NAME)

re: fclean all
