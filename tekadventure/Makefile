##
## Makefile for Makefile in /home/d.kevin/tekadventure_new
## 
## Made by Kevin DA PONTE
## Login   <d.kevin@epitech.net>
## 
## Started on  Thu May 11 13:27:48 2017 Kevin DA PONTE
## Last update Sun May 28 23:40:59 2017 Sridhar Vengadesan
##

CC		=       gcc

SRC		=	src/tekadventure.c				\
			src/windows/windows.c				\
			src/game_loop/game/draw_window.c		\
			src/game_loop/game/event.c			\
			src/game_loop/game/game_loop.c			\
			src/game_loop/game/hero.c			\
			src/game_loop/game/first_scene_event.c		\
			src/game_loop/game/fifth_scene_event.c		\
			src/game_loop/game/forth_scene_event.c		\
			src/game_loop/game/second_scene_event.c		\
			src/game_loop/game/seventh_scene_event.c	\
			src/game_loop/game/sixth_scene_event.c		\
			src/game_loop/game/third_scene_event.c		\
			src/game_loop/menu/display_text.c		\
			src/game_loop/menu/menu_event.c			\
			src/game_loop/menu/menu_draw_window.c		\
			src/game_loop/menu/menu_game_loop.c		\
			src/game_loop/menu/options_detection.c		\
			src/game_loop/confg/get_config.c		\
			src/game_loop/confg/map_ini.c

SRC_LIB		=	./lib/my/my_putchar.c		\
			./lib/my/my_putstr.c		\
			./lib/my/vector2f.c		\

OBJS		=	$(SRC:.c=.o)

TMP		=	$(SRC:.c=.c~)

RM		=	rm -rf

OBJ		=	$(SRC_LIB:.c=.o)

CFLAGS		=	-Wall -Wextra -Werror

CPPFLAGS	=	-I ./include/

LDFLAGS		=	-L ./lib/my -lmy -lc_graph_prog_full

NAME		=	tekadventure

LIB		=	./lib/my/libmy.a

all		:	$(LIB) $(NAME)

$(LIB)		:	$(OBJ)
			ar rc $(LIB) $(OBJ)

$(NAME)		:	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)

debug		:	$(OBJS) $(LIB)
			$(CC) -o $(NAME) $(OBJS) $(DEBUG_FLAGS) $(CFLAGS) $(LDFLAGS)

exec		:	fclean all
			./$(NAME)

clean		:
			$(RM) $(OBJS) $(OBJ) $(TMP)

fclean		:	clean
			$(RM) $(NAME)
			$(RM) $(LIB)

re		:	fclean all

.PHONY		:	all debug exec clean fclean re
