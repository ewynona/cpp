NAME = Phonebook

FLAGS = -Wall -Wextra -Werror

CC = clang++

INC = contact.hpp phonebook.hpp

SRC = contact.cpp phonebook.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(NAME)

re: fclean all
