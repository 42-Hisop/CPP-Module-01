CC= clang++
CFLAGS = -Wall -Wextra -Werror
SRCS= main.cpp \
	  Zombie.cpp \
	  newZombie.cpp \
	  randomChump.cpp
	  
NAME= Zombie

OBJS= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:fclean all
