NAME = so_long

# COLORS
RED     = \033[91;1m
GREEN   = \033[92;1m
CLEAR   = \033[0m

CFLAGS = -Wall -Werror -Wextra -g3 #-fsanitize=address
MLXFLAGS = -framework OpenGL -framework AppKit
CC = cc
AR = ar -crs
RM = rm -f

LIBFTA = libft/libft.a
MLXA = mlx/libmlx.a

SRC = $(addprefix ./src/, main.c, map.c, parsing_map.c, game.c, handle.c, graphical_content.c)

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@make all -sC ./libft
	@echo "$(GREEN)Compiling Libft.$(CLEAR)"
	@make all -sC ./mlx
	@echo "$(GREEN)Compiling Mlx.$(CLEAR)"
	@$(CC) $(CFLAGS) $(OBJS) -I ./includes $(LIBFTA) $(MLXA) $(MLXFLAGS) -o $(NAME)
	@echo "$(GREEN)So_long Compiled.$(CLEAR)"

clean:
	@$(RM) $(OBJS)
	@make clean -sC libft
	@make clean -sC mlx
	@echo "$(RED)All Objs Deleted.$(CLEAR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Everything Deleted.$(CLEAR)"

re: fclean all

.PHONY: all bonus clean fclean re