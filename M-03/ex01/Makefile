NAME		=	Fixed

SRC			=	main.cpp \
				Fixed.cpp \

OBJS		=	$(SRC:.cpp=.o)

CC		=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98


EXEC		=	$(NAME)

# ------------------------------------- RULES ---------------------------------
all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^


clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all



.PHONY:	all clean fclean re run
