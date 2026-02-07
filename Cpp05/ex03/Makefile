NAME = InternForms
SRC =  main.cpp ./src/Bureaucrat.cpp ./src/AForm.cpp ./src/ShrubberyCreationForm.cpp ./src/RobotomyRequestForm.cpp ./src/PresidentialPardonForm.cpp \
./src/Intern.cpp 
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o: %.cpp ./include/Bureaucrat.hpp ./include/AForm.hpp ./include/ShrubberyCreationForm.hpp
	c++ -c -Wall -Wextra -Werror -std=c++98 $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

s: all clean