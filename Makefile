##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

CC = g++

SRCS = $(wildcard *.cpp Objects/*.cpp)

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

NAME = my_tower_defender

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
