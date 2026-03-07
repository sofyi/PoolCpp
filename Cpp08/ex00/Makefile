NAME = esyFind
SRC =  main.cpp 
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o: %.cpp esyfind.hpp esyfind.tpp
	c++ -c -Wall -Wextra -Werror -std=c++98 $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

s: all clean