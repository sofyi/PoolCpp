NAME = ZombieHorde
SRC = main.cpp  \
	src/zombieHorde.cpp src/Zombie.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $@
%.o : %.cpp Zombie.hpp
	c++ -c -Wall -Wextra -Werror $< -o $@
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
s: all clean
re: fclean all