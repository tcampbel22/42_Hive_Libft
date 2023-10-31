NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR =.
OBJ_DIR =.

SRCS = $(wildcard$(SRC_DIR)/*.c)
OBJS: = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	 rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
