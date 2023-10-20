NAME = phonebook

INC =	Contact.class.hpp \
	PhoneBook.class.hpp

CC = g++

FLAGS = -g -Wall -Wextra -Werror -std=c++98
SRC =	Contact.class.cpp \
	PhoneBook.class.cpp \
	main.cpp
	

OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
