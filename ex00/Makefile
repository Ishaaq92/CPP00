CC = clang++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = megaphone.cpp
NAME = megaphone

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) $< -c -o $@

re: fclean all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)


.PHONY: all clean fclean
