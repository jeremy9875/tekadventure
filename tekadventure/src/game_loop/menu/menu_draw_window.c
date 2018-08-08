/*
** draw_window.c for draw_window in /home/d.kevin/TEST/tekadventure/src/game_loop
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Tue Apr 11 11:27:07 2017 Kevin DA PONTE
** Last update Fri May 19 11:52:16 2017 Kevin DA PONTE
*/

#include "windows.h"
#include "game_loop.h"

void		menu_draw_window(t_window *window, sfText *text)
{
  sfRenderWindow_drawText(window->window, text, NULL);
  sfRenderWindow_display(window->window);
}
