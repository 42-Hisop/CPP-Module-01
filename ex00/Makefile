CC= clang++
CFLAGS= -Wall -Wextra -Werror
SRCS= main.cpp \
	  Zombie.cpp \
	  newZombie.cpp \
	  randomChump.cpp
	  
NAME= Zombie

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all
