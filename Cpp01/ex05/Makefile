NAME = Harl
SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $@
%.o:%.cpp Harl.hpp
	c++ -c -Wall -Wextra -Werror $< -o $@
clean:
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all
s : all clean