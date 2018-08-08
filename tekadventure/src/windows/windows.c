/*
** window_create.c for windows_create in /home/d.kevin/tekadventure_new/src/windows
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Thu May 11 14:11:44 2017 Kevin DA PONTE
** Last update Fri May 19 11:24:17 2017 Kevin DA PONTE
*/

#include "windows.h"

bool		create_window(t_window *window)
{
  window->mode.width = WINDOW_WIDTH;
  window->mode.height = WINDOW_HEIGHT;
  window->mode.bitsPerPixel = BITS_PER_PIXEL;
  window->window = sfRenderWindow_create(sfVideoMode_getDesktopMode()
					 , WINDOW_TITLE, sfFullscreen, NULL);
  if (!window)
    return (false);
  return (true);
}
