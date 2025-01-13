NAME = span

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Span.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) Span.hpp
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp Span.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re
