NAME = Bank
FLAGS = -Wall -Wextra -Werror #-std=c++98
SRC = tests.cpp Account.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++  $(OBJ) -o $@ 
%.o : %.cpp Account.hpp
	c++ $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
s : all clean
.PHONY: all clean fclean re s