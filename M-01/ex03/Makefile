
SOURCES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

NAME = weapon
CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(SOURCES)
	@echo "COMPILATION $@"
	@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test
