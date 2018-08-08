/*
** options_detection.c for tekadventure in /home/VSridhar78/Infographie/tekadventure
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Mon May 22 11:55:29 2017 Sridhar Vengadesan
** Last update Sun May 28 23:24:30 2017 Kevin DA PONTE
*/

#include "my.h"
#include "menu.h"

void	play(t_window *window, t_text t, t_hero s, sfVector2i i)
{
  if (s.mouse_pos.x > 870 && s.mouse_pos.x < 1050 &&
      s.mouse_pos.y > 430 && s.mouse_pos.y < 505 && i.x > 50)
    my_putstr_text(window, t.play, sfColor_fromRGB(124,19,19));
  else
    my_putstr_text(window, t.play, sfColor_fromRGBA(0, 0, 0, i.y));
}

void	option(t_window *window, t_text t, t_hero s, sfVector2i i)
{
  if (s.mouse_pos.x > 720 && s.mouse_pos.x < 1205 &&
      s.mouse_pos.y > 555 && s.mouse_pos.y < 635 && i.x > 50)
    my_putstr_text(window, t.option, sfColor_fromRGB(124, 19, 19));
  else
    my_putstr_text(window, t.option, sfColor_fromRGBA(0, 0, 0, i.y));
}

void	credit(t_window *window, t_text t, t_hero s, sfVector2i i)
{
  if (s.mouse_pos.x > 750 && s.mouse_pos.x < 1170 &&
      s.mouse_pos.y > 690 && s.mouse_pos.y < 765 && i.x > 50)
    my_putstr_text(window, t.credit, sfColor_fromRGB(124, 19, 19));
  else
    my_putstr_text(window, t.credit, sfColor_fromRGBA(0, 0, 0, i.y));
}

void	my_exit(t_window *window, t_text t, t_hero s, sfVector2i i)
{
  if (s.mouse_pos.x > 875 && s.mouse_pos.x < 1050 &&
      s.mouse_pos.y > 820 && s.mouse_pos.y < 900 && i.x > 50)
    my_putstr_text(window, t.exit, sfColor_fromRGB(124,19,19));
  else
    my_putstr_text(window, t.exit, sfColor_fromRGBA(0, 0, 0, i.y));
}
