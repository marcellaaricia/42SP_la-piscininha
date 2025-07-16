# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marde-je <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/15 02:35:22 by marde-je          #+#    #+#              #
#    Updated: 2025/06/15 02:35:25 by marde-je         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush_02

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = .
INCDIR = .

SRCS = main.c \
       validation.c \
       utils.c \
       dict.c \
       dict_loader.c \
       file.c \
       converter.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re