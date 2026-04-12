

NAME = easyfind

CXX = c++

CXXFLAG = -Wall -Werror -Wextra -std=c++98 -Iheader

SRC = SRC/main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)

%.o:%.cpp
		$(CXX) $(CXXFLAG) -c $< -o $@

clean: rm -f $(OBJ)

fclean: clean
	rm - f $(NAME)

re: fclean all

.PONY: re all clean fclean 
