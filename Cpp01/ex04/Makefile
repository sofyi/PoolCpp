NAME = Minisad
SRC = main.cpp Minisad.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $@
%.o:%.cpp Minisad.hpp
	c++ -c -Wall -Wextra -Werror $< -o $@
clean:
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all
s : all clean