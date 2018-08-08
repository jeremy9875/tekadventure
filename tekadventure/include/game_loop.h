/*
** game_loop.h for game_loop in /home/d.kevin/tekadventure_new/include
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Thu May 11 13:46:53 2017 Kevin DA PONTE
** Last update Sun May 28 21:15:15 2017 Sridhar Vengadesan
*/

#ifndef GAME_LOOP_H_
# define GAME_LOOP_H_

# define SPEED_MVT_HERO		20

typedef struct	s_my_hero
{
  sfTexture*	hero;
  sfTexture*	map;
  sfTexture*	map_2;
  sfSprite*	hero_sprite;
  sfSprite*	map_sprite;
  sfSprite*	map_sprite2;
  sfText*	go;
  sfVector2f	position_m;
  sfVector2f	position_h;
  sfVector2f	p;
  sfVector2f	mouse_pos_float;
  sfVector2i	mouse_pos;
  sfIntRect	h1;
  char*		str;
  float		i;
  float		a;
  int		tmp;
  int		map_count;
}		t_hero;

t_hero		event(t_window *window, t_hero s, sfMusic* music);
bool		main_menu(t_window *window);
void		draw_window(t_window *window, t_hero s);
bool		game_loop(t_window *window);
t_hero		take_value(t_hero s);
t_hero		mvt_hero(t_hero s, sfVector2i i, sfClock* clock);
t_hero		init_hero(t_hero s);
t_hero		first_scene_event(t_hero s, sfVector2i tmp);
t_hero		second_scene_event(t_hero s, sfVector2i tmp);
t_hero		third_scene_event(t_hero s, sfVector2i tmp);
t_hero		forth_scene_event(t_hero s, sfVector2i tmp);
t_hero		fifth_scene_event(t_hero s, sfVector2i tmp);
t_hero		sixth_scene_event(t_hero s, sfVector2i tmp);
t_hero		seventh_scene_event(t_hero s, sfVector2i tmp);
t_hero		init_next_map(t_hero s);

#endif /* !GAME_LOOP_H_ */
