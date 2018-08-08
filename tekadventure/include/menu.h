/*
** menu.h for menu in /home/d.kevin/tekadventure_new/include
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Thu May 11 15:13:17 2017 Kevin DA PONTE
** Last update Sun May 28 23:21:54 2017 Kevin DA PONTE
*/

#ifndef MENU_H_
# define MENU_H_

# include "game_loop.h"

# define TEXT_FORMAT_1		90
# define TEXT_FORMAT_2		200
# define GAMA			100
# define GAMA_2			100
# define PLAY			"PLAY"
# define OPTION			"COMING SOON"
# define CREDIT			"GOOD LUCK"
# define EXIT			"EXIT"
# define TITLE			"TEK         "
# define TITLE_2		"   ADVENTURE"

typedef struct	s_text
{
  sfText*	title_2;
  sfText*	play;
  sfText*	title;
  sfText*	option;
  sfText*	credit;
  sfText*	exit;
}		t_text;

sfText*		init_text(sfText* text, char *str, int text_format, sfVector2f text_pos);
bool		my_putstr_text(t_window *window, sfText* text, sfColor color);
sfVector2i	display_text(t_window *window, t_text t, t_hero s, sfVector2i i);
sfVector2i	menu_event(t_window *window, sfVector2i i, sfMusic* music);
void		play(t_window *window, t_text t, t_hero s, sfVector2i i);
void		option(t_window *window, t_text t, t_hero s, sfVector2i i);
void		credit(t_window *window, t_text t, t_hero s, sfVector2i i);
void		my_exit(t_window *window, t_text t, t_hero s, sfVector2i i);
void		menu_draw_window(t_window *window, sfText* text);
bool		menu(t_window *window);

#endif /* !MENU_H_ */
