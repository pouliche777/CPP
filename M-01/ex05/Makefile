NAME		=	harl

SRC			=	main.cpp \
				Harl.cpp \

OBJS		=	$(SRC:.cpp=.o)

CC		=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98


EXEC		=	$(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^


clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all



.PHONY:	all clean fclean re run
