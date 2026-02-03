NAM = InternForms
SRC =  main.cpp ./src/Bureaucrat.cpp ./src/AForm.cpp ./src/ShrubberyCreationForm.cpp ./src/RobotomyRequestForm.cpp ./src/PresidentialPardonForm.cpp \
./src/Intern.cpp 
OBJ = $(SRC:.cpp=.o)

all : $(NAM)

$(NAM) : $(OBJ)
	c++ $(OBJ) -o $(NAM)

%.o: %.cpp ./include/Bureaucrat.hpp ./include/AForm.hpp ./include/ShrubberyCreationForm.hpp
	c++ -c -Wall -Wextra -Werror -std=c++98 $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAM)

re : fclean all

s: all clean