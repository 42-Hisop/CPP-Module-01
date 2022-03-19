CC= c++
CFLAGS = -Wall -Wextra -Werror
SRCS= main.cpp \
	  Karen.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= karenFilter

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
