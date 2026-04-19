# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/19 16:39:39 by hsamira           #+#    #+#              #
#    Updated: 2026/04/19 16:40:36 by hsamira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

CXX = c++

CXXFLAG = -Wall -Wextra -Werror -std=c++98 -Iheader

SRC = SRC/main.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean


