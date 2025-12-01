NAME = PhoneBook
FLAGS = -Wall -Wextra -Werror #-std=c++98
SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++  $(OBJ) -o $@ 
%.o : %.cpp Contact.hpp PhoneBook.hpp
	c++ $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
s : all clean
.PHONY: all clean fclean re s
