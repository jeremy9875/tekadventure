/*
** seventh_scene_event.c for tekadventure in /home/VSridhar78/Infographie/tekadventure
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Sun May 28 21:00:52 2017 Sridhar Vengadesan
** Last update Sun May 28 21:23:35 2017 Sridhar Vengadesan
*/

#include "windows.h"
#include "menu.h"
#include "my.h"
#include <string.h>

t_hero	seventh_scene_mvt(t_hero s, sfVector2i tmp)
{
  if (s.mouse_pos.x > 1650 && s.mouse_pos.x < 1900 &&
      s.mouse_pos.y > 800 && s.mouse_pos.y < 1000)
    {
      s.mouse_pos.x = 1700;
      s.mouse_pos.y = 950;
      return (s);
    }
  if (s.mouse_pos.x > 100 && s.mouse_pos.x < 300 &&
      s.mouse_pos.y > 800 && s.mouse_pos.y < 1000)
    {
      s.mouse_pos.x = 150;
      s.mouse_pos.y = 900;
      return (s);
    }
  s.mouse_pos = tmp;
  return (s);
}

t_hero	seventh_scene_go(t_hero s)
{
  if (s.position_h.x >= 170 && s.position_h.y >= 900 &&
      s.position_h.x <= 1700 && s.position_h.y <= 950)
    {
      s.str = NOTHING;
      s.go = init_text(s.go, s.str, 40, vector2f(150, 500));
    }
  if (s.position_h.x <= 150 + 20 && s.position_h.y <= 950 + 20)
    {
      s.str = GO;
      s.go = init_text(s.go, s.str, 40, vector2f(150, 500));
    }
  if (s.position_h.x >= 1700 - 20 && s.position_h.y >= 950 - 20)
    {
      s.str = GO;
      s.go = init_text(s.go, s.str, 40, vector2f(1800, 500));
    }
  return (s);
}

t_hero	seventh_scene_event(t_hero s, sfVector2i tmp)
{
  s = seventh_scene_go(s);
  if (s.mouse_pos.x > 1750 && s.mouse_pos.x < 1850 &&
      s.mouse_pos.y > 450 && s.mouse_pos.y < 550 &&
      (!strcmp(s.str, GO)))
    {
      s.tmp = 6;
      s.map_count = 1;
      s.str = NOTHING;
      s.go = init_text(s.go, s.str, 40, vector2f(0, 0));
      s = init_next_map(s);
      return (s);
    }
  s = seventh_scene_mvt(s, tmp);
  return (s);
}
