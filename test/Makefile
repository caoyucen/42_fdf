# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycao <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/21 15:12:20 by ycao              #+#    #+#              #
#    Updated: 2017/09/21 15:12:26 by ycao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fdf

SRC		= main.c \

OBJ		= $(addprefix $(OBJDIR),$(SRC:.c=.o))

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

LIBFT	= ./libft/libft.a
LIBINC	= -I./libft
LIBLINK	= -L./libft -lft

MLX		= ./minilibx_macos/libmlx.a
MLXINC	= -I./minilibx_macos
MLXLINK	= -L./minilibx_macos -lmlx -framework OpenGL -framework AppKit


SRCDIR	= ./src/
INCDIR	= ./includes/
OBJDIR	= ./obj/

all: obj libft mlx $(NAME)

gfx:
	rm -rf $(NAME)
	rm -rf $(OBJDIR)
	make

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) $(LIBINC) $(MLXINC)  -I $(INCDIR) -o $@ -c $<

libft: $(LIBFT)

mlx: $(MLX)


$(LIBFT):
	make -C ./libft

$(MLX):
	make -C ./minilibx_macos


$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(MLXLINK) $(LIBLINK)

clean:
	rm -rf $(OBJDIR)
	make -C ./libft clean
	make -C ./minilibx_macos clean

fclean: clean
	rm -rf $(NAME)
	make -C ./libft fclean

re: fclean all
