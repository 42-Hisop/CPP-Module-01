CC= clang++
CFLAGS= -Wall -Wextra -Werror
SRCS= main.cpp \
	  Weapon.cpp \
	  HumanA.cpp \
	  HumanB.cpp

NAME= attack

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all
