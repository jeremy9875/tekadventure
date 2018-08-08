/*
** first_scene_event.c for tekadventure in /home/VSridhar78/Infographie/tekadventure
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Fri May 26 15:33:40 2017 Sridhar Vengadesan
** Last update Fri May 26 15:37:13 2017 Sridhar Vengadesan
*/

#include "windows.h"
#include "menu.h"
#include "my.h"
#include <string.h>

t_hero	first_scene_mvt(t_hero s, sfVector2i tmp)
{
  if (s.mouse_pos.x > 980 && s.mouse_pos.x < 1030 &&
      s.mouse_pos.y > 230 && s.mouse_pos.y < 310 &&
      s.position_h.y <= 510)
    {
      s.str = GO;
      s.go = init_text(s.go, s.str, 40, vector2f(1010, 200));
    }
  if (s.mouse_pos.x > 980 && s.mouse_pos.x < 1030 &&
      s.mouse_pos.y > 200 && s.mouse_pos.y < 220 &&
      s.position_h.y <= 510 && (!strcmp(s.str, GO)))
    {
      s.tmp = 1;
      s.map_count = 1;
      s.str = NOTHING;
      s.go = init_text(s.go, s.str, 40, vector2f(1010, 220));
      s = init_next_map(s);
      return (s);
    }
  s.mouse_pos = tmp;
  return (s);
}

t_hero	first_scene_event(t_hero s, sfVector2i tmp)
{
  if (s.mouse_pos.x > 800 && s.mouse_pos.x < 1050 &&
      s.mouse_pos.y > 470 && s.mouse_pos.y < 550)
    {
      s.mouse_pos.x = 900;
      s.mouse_pos.y = 510;
      return (s);
    }
  if (s.mouse_pos.x > 800 && s.mouse_pos.x < 1050 &&
      s.mouse_pos.y > 800 && s.mouse_pos.y < 1000)
    {
      s.str = NOTHING;
      s.go = init_text(s.go, s.str, 40, vector2f(1010, 220));
      s.mouse_pos.x = 900;
      s.mouse_pos.y = 900;
      return (s);
    }
  s = first_scene_mvt(s, tmp);
  return (s);
}
