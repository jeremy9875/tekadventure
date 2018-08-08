/*
** game_loop.c for game_loop in /home/d.kevin/tekadventure_new/src/game_loop
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Thu May 11 14:17:04 2017 Kevin DA PONTE
** Last update Sun May 28 23:37:55 2017 Sridhar Vengadesan
*/

#include "my.h"
#include "menu.h"

bool		game_loop(t_window *window)
{
  t_hero	s;
  sfClock*	clock;
  sfMusic*	music;

  music = sfMusic_createFromFile("music/King.ogg");
  if (!music)
    return (EXIT_FAILURE);
  sfMusic_play(music);
  s = init_hero(s);
  s.go = sfText_create();
  clock = sfClock_create();
  while (sfRenderWindow_isOpen(window->window))
    {
      if ((sfMusic_getStatus(music)) == 0)
        sfMusic_play(music);
      sfSprite_setPosition(s.hero_sprite, s.position_h);
      s = event(window, s, music);
      if ((sfTime_asSeconds(sfClock_getElapsedTime(clock))) >= 0.2)
        s = mvt_hero(s, s.mouse_pos, clock);
      sfSprite_setTextureRect(s.hero_sprite, s.h1);
      draw_window(window, s);
    }
  return (true);
}
