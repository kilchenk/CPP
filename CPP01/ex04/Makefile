RESET	= "\033[0m"
RED		= "\033[0;31m"

CC = c++
FLAGS = #-Wall -Wextra -Werror -std=c++98
SRC = main.cpp
RM = rm -f
RMR = rm -f *.replace


NAME = reaplace

all:$(NAME)
%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) $(SRC)
	@$(CC) $(SRC) $(FLAGS) -o $(NAME)
	@echo •	😈 COMPILED 😈 •$(RESET)

fclean:
	@$(RM) $(NAME)
	@$(RMR)
	@echo $(RED)• 👿 REMOVED 👿 •$(RESET)

re: fclean all

run: all
	@./$(NAME)