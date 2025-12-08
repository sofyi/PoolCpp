NAME = PTREF
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $@
%.o : %.cpp
	c++ -c -Wall -Wextra -Werror $< -o $@
clean:
	rm f $(OBJ)
fclean: clean
	rm f $(NAME)
s: all clean
re: fclean all
.PHONY:all clean fclean s re