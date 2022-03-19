CC= c++
CFLAGS = -Wall -Wextra -Werror

SRCS= main.cpp \
	  Zombie.cpp \
	  ZombieHorde.cpp
	  
NAME= ZombieHorde

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
