NAME = FixedPoint
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror #-std=c++98 

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(OBJ) -o $@

%.o:%.cpp Fixed.hpp
	c++ -c $(FLAGS) $< -o $@

clean:
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re:	fclean all
s:	all clean
.PHONY:all clean fclean s re