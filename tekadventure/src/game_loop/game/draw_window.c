/*
** draw_window.c for draw_window in /home/d.kevin/tekadventure_new/src/game_loop
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Thu May 11 14:17:35 2017 Kevin DA PONTE
** Last update Sun May 28 21:43:38 2017 jeremy elkaim
*/

#include "windows.h"
#include "game_loop.h"
#include "menu.h"
#include "my.h"
#include <string.h>

void		draw_window(t_window *window, t_hero s)
{
  sfRenderWindow_clear(window->window, sfBlack);
  sfRenderWindow_drawSprite(window->window, s.map_sprite, NULL);
  sfRenderWindow_drawSprite(window->window, s.hero_sprite, NULL);
  if (s.go != NULL)
    my_putstr_text(window, s.go, sfWhite);
  sfRenderWindow_display(window->window);
}
