NAME = Human
SRC = main.cpp ./srcs/HumanA.cpp  ./srcs/HumanB.cpp ./srcs/Weapon.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $@
%.o:%.cpp ./include/HumanA.hpp ./include/HumanB.hpp ./include/Weapon.hpp
	c++ -c -Wall -Wextra -Werror $< -o $@
clean:
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all
s : all clean
