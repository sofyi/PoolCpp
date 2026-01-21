NAME = Animals

SRC = main.cpp ./src/Animal.cpp ./src/Cat.cpp ./src/Dog.cpp\
./src/WrongAnimal.cpp ./src/WrongCat.cpp ./src/Brain.cpp

HED = ./includ/Animal.hpp ./includ/Cat.hpp ./includ/Dog.hpp \
./includ/WrongAnimal.hpp ./includ/WrongCat.hpp ./includ/Brain.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o : %.cpp 
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@ 
clean:
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

s : all clean

.PHONY:all clean fclean s re