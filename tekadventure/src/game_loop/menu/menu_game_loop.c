/*
** game_loop.c for game_loop in /home/d.kevin/TEST/tekadventure/src/game_loop
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Tue Apr 11 11:33:46 2017 Kevin DA PONTE
** Last update Tue May 23 10:56:24 2017 jeremy elkaim
*/

#include "my.h"
#include "menu.h"

bool		clear_screen(t_window *window, t_hero s)
{
  sfRenderWindow_clear(window->window, sfBlack);
  sfRenderWindow_drawSprite(window->window, s.map_sprite, NULL);
  sfRenderWindow_drawSprite(window->window, s.map_sprite2, NULL);
  return (true);
}

t_text		text_initial(t_text t)
{
  t.title = init_text(t.title, TITLE, TEXT_FORMAT_2,
		      vector2f(WINDOW_WIDTH / 2, 150));
  t.title_2 = init_text(t.title_2, TITLE_2, TEXT_FORMAT_2,
			vector2f(WINDOW_WIDTH / 2, 150));
  t.play = init_text(t.play, PLAY, TEXT_FORMAT_1,
		     vector2f(WINDOW_WIDTH / 2, 450));
  t.option = init_text(t.play, OPTION, TEXT_FORMAT_1,
		       vector2f(WINDOW_WIDTH / 2, 580));
  t.credit = init_text(t.play, CREDIT, TEXT_FORMAT_1,
		       vector2f(WINDOW_WIDTH / 2, 710));
  t.exit = init_text(t.play, EXIT, TEXT_FORMAT_1,
		     vector2f(WINDOW_WIDTH / 2, 840));
  return (t);
}

t_hero		init_menu(t_hero s)
{
  s.map_sprite = sfSprite_create();
  s.map_sprite2 = sfSprite_create();
  s.map = sfTexture_createFromFile("img/test.png", NULL);
  s.map_2 = sfTexture_createFromFile("img/rec_4.png", NULL);
  sfSprite_setTexture(s.map_sprite, s.map, sfTrue);
  sfSprite_setTexture(s.map_sprite2, s.map_2, sfTrue);
  sfSprite_setScale(s.map_sprite, vector2f(0.5, 0.5));
  sfSprite_setPosition(s.map_sprite2, vector2f(10, 0));
  sfSprite_setColor(s.map_sprite, sfColor_fromRGBA(255, 255, 255, GAMA));
  sfSprite_setColor(s.map_sprite2, sfColor_fromRGBA(255, 255, 255, GAMA_2));
  return (s);
}

bool		menu(t_window *window)
{
  t_hero	s;
  t_text	t;
  sfMusic*	music;
  sfVector2i	i;

  i.x = 0;
  i.y = 0;
  music = sfMusic_createFromFile("music/Piano.ogg");
  if (!music)
    return (EXIT_FAILURE);
  sfMusic_play(music);
  s = init_menu(s);
  clear_screen(window, s);
  t = text_initial(t);
  while (sfRenderWindow_isOpen(window->window))
    {
      if ((sfMusic_getStatus(music)) == 0)
	sfMusic_play(music);
      s.mouse_pos = menu_event(window, s.mouse_pos, music);
      i = display_text(window, t, s, i);
    }
  return (true);
}
