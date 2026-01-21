NAME = Animals
SRC = main.cpp ./src/Animal.cpp ./src/Cat.cpp ./src/Dog.cpp\
./src/WrongAnimal.cpp ./src/WrongCat.cpp ./src/Brain.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o : %.cpp ./includ/Animal.hpp ./includ/Cat.hpp ./includ/Dog.hpp ./includ/WrongAnimal.hpp ./includ/WrongCat.hpp
	c++ -Wall -Wextra -Werror -c $< -o $@ 
clean:
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

s : all clean

.PHONY:all clean fclean s re