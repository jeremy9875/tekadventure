/*
** hero.c for hero in /home/d.kevin/tekadventure_new/src/game_loop
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Thu May 11 15:31:57 2017 Kevin DA PONTE
** Last update Sun May 28 21:46:07 2017 jeremy elkaim
*/

#include "windows.h"
#include "menu.h"
#include "my.h"

t_hero		take_value(t_hero s)
{
  s.a = 6;
  s.i = 0.1;
  s.position_h.x = 900;
  s.position_h.y = 900;
  s.h1.left = 0;
  s.h1.top = 84;
  s.h1.width = 52;
  s.h1.height = 84;
  s.hero_sprite = sfSprite_create();
  s.map_sprite = sfSprite_create();
  s.tmp = 0;
  s.map_count = 0;
  return (s);
}

t_hero		change_sprite_right(t_hero s, int tmp)
{
  if (tmp == 1)
    s.position_h.x += SPEED_MVT_HERO;
  else
    {
      s.position_h.y += SPEED_MVT_HERO;
      s.a = s.a + s.i;
      sfSprite_setScale(s.hero_sprite, vector2f(s.a, s.a));
    }
  s.h1.top = 84;
  if (s.h1.left == 312)
    s.h1.left = 0;
  s.h1.left += 52;
  return (s);
}

t_hero		change_sprite_left(t_hero s, int tmp)
{
  if (tmp == 1)
      s.position_h.x -= SPEED_MVT_HERO;
  else
    {
      s.position_h.y -= SPEED_MVT_HERO;
      s.a = s.a - s.i;
      sfSprite_setScale(s.hero_sprite, vector2f(s.a, s.a));
    }
  s.h1.top = 0;
  if (s.h1.left == 312)
    s.h1.left = 0;
  s.h1.left += 52;
  return (s);
}

t_hero		mvt_hero(t_hero s, sfVector2i mouse_pos, sfClock* clock)
{
  sfVector2f	tmp;

  tmp = s.position_h;
  if (s.position_h.x != mouse_pos.x || s.position_h.y != mouse_pos.y)
    {
      if (s.position_h.y > mouse_pos.y)
        s = change_sprite_left(s, 0);
      if (s.position_h.y < mouse_pos.y && s.position_h.y + 20 < mouse_pos.y)
        s = change_sprite_right(s, 0);
      if (s.position_h.x < mouse_pos.x)
        s = change_sprite_right(s, 1);
      if (s.position_h.x > mouse_pos.x && s.position_h.x - 20 > mouse_pos.x)
        s = change_sprite_left(s, 1);
      if (tmp.x == s.position_h.x && tmp.y == s.position_h.y)
	s.h1.left = 0;
    }
  sfClock_restart(clock);
  return (s);
}

t_hero		init_hero(t_hero s)
{
  s = take_value(s);
  s.mouse_pos.x = s.position_h.x;
  s.mouse_pos.y = s.position_h.y;
  s.p.x = 23;
  s.p.y = 70;
  s.hero = sfTexture_createFromFile("img/hero_girl.png", NULL);
  s.map = sfTexture_createFromFile("img/Map_Jeux/simple_map/manor/1.png", NULL);
  sfSprite_setTexture(s.hero_sprite, s.hero, sfTrue);
  sfSprite_setTexture(s.map_sprite, s.map, sfTrue);
  sfSprite_setScale(s.hero_sprite, vector2f(6, 6));
  sfSprite_setScale(s.map_sprite, vector2f(5.3, 4.9));
  sfSprite_setOrigin(s.hero_sprite, s.p);
  return (s);
}
