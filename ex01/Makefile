NAME=Span
FLAGS=-Wall -Wextra -Werror
SRCS= main.cpp Span.cpp

all: $(NAME)

$(NAME): $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf *.o
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re