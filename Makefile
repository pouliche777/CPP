NAME		=	Fixed

SRC			=	main.cpp \
				Fixed.cpp \

OBJS		=	$(SRC:.cpp=.o)

CC		=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98


EXEC		=	$(NAME)


all: $(NAME)
	

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

