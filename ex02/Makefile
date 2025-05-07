CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -Iincludes

SRCDIR = srcs/

SRCS = $(SRCDIR)main.cpp $(SRCDIR)Animal.cpp $(SRCDIR)Dog.cpp $(SRCDIR)Cat.cpp\
		$(SRCDIR)WrongAnimal.cpp $(SRCDIR)WrongCat.cpp $(SRCDIR)Brain.cpp\

BIN_DIR = bin

OBJS = $(SRCS:$(SRCDIR)%.cpp=$(BIN_DIR)/%.o)

NAME = Animal2

all: $(NAME)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/%.o: $(SRCDIR)%.cpp | $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(BIN_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re