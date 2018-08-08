/*
** event.c for event in /home/d.kevin/TEST/tekadventure/src/game_loop
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Tue Apr 11 10:55:18 2017 Kevin DA PONTE
** Last update Sun May 28 23:18:00 2017 Kevin DA PONTE
*/

#include "windows.h"
#include "game_loop.h"

sfVector2i	menu_event(t_window *window, sfVector2i mouse_pos, sfMusic* music)
{
  sfEvent	event;
  sfVector2i	mouse_left_pos;

  while (sfRenderWindow_pollEvent(window->window, &event))
    {
      if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
        sfRenderWindow_close(window->window);
      if ((sfMouse_isButtonPressed(sfMouseLeft)) == sfTrue)
	mouse_left_pos = sfMouse_getPositionRenderWindow(window->window);
      if (mouse_left_pos.x > 870 && mouse_left_pos.x < 1050 &&
	  mouse_left_pos.y > 430 && mouse_left_pos.y < 505)
	{
	  sfMusic_destroy(music);
	  game_loop(window);
	}
      if (mouse_left_pos.x > 875 && mouse_left_pos.x < 1050 &&
	  mouse_left_pos.y > 820 && mouse_left_pos.y < 900)
	sfRenderWindow_close(window->window);
      mouse_pos = sfMouse_getPositionRenderWindow(window->window);
    }
  return (mouse_pos);
}
