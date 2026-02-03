NAM = Bureaucrat
SRC = Bureaucrat.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAM)

$(NAM) : $(OBJ)
	c++ $(OBJ) -o $(NAM)

%.o: %.cpp Bureaucrat.hpp
	c++ -c -Wall -Wextra -Werror -std=c++98 $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAM)

re : fclean all

s: all clean