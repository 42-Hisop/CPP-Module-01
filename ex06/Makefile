CC= clang++
CFLAGS= -Wall -Wextra -Werror
SRCS= main.cpp \
	  Karen.cpp

NAME= karenFilter

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all
