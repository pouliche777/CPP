NAME		=	bureaucrat

SRC			=	Bureaucrat.cpp \
				main.cpp \
				Form.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp \
				ShrubberyCreationForm.cpp

OBJS		=	$(SRC:.cpp=.o)

CC		=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98 


EXEC		=	$(NAME)


all: $(NAME)
	

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	
.cpp.o: $(SRCS) $(OBJS)
		$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

