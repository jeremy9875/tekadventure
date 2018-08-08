/*
** event.c for event in /home/d.kevin/tekadventure_new/src/game_loop
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Thu May 11 14:17:14 2017 Kevin DA PONTE
** Last update Sun May 28 21:01:22 2017 Sridhar Vengadesan
*/

#include "windows.h"
#include "menu.h"
#include "my.h"
#include <string.h>

static  t_img g_img[] =
  {
    {IMG1, IMG1_0},
    {IMG2, IMG2_1},
    {IMG3, IMG3_2},
    {IMG4, IMG4_3},
    {IMG5, IMG5_4},
    {IMG6, IMG6_5},
    {IMG7, IMG7_6},
  };

t_hero	init_next_map(t_hero s)
{
  s.map_sprite = sfSprite_create();
  if (s.tmp == 1)
    s.map = sfTexture_createFromFile("img/Map_Jeux/simple_map/manor/2.png", NULL);
  if (s.tmp == 2)
    s.map = sfTexture_createFromFile("img/Map_Jeux/simple_map/manor/3.png", NULL);
  if (s.tmp == 3)
    s.map = sfTexture_createFromFile("img/Map_Jeux/simple_map/manor/4.png", NULL);
  if (s.tmp == 4)
    s.map = sfTexture_createFromFile("img/Map_Jeux/simple_map/manor/5.png", NULL);
  if (s.tmp == 5)
    s.map = sfTexture_createFromFile("img/Map_Jeux/simple_map/manor/6.png", NULL);
  if (s.tmp == 6)
    s.map = sfTexture_createFromFile("img/Map_Jeux/simple_map/manor/7.png", NULL);
  sfSprite_setTexture(s.map_sprite, s.map, sfTrue);
  sfSprite_setScale(s.map_sprite, vector2f(5.3, 4.9));
  if (s.map_count == 1)
    {
      s.position_h.x = 150;
      s.position_h.y = 900;
      s.mouse_pos.x = 150;
      s.mouse_pos.y = 900;
    }
  if (s.map_count == -1)
    {
      s.position_h.x = 1700;
      s.position_h.y = 950;
      s.mouse_pos.x = 1700;
      s.mouse_pos.y = 950;
    }
  return (s);
}

t_hero	dispatch_event(t_hero s, sfVector2i tmp)
{
  if (s.tmp == 0)
    s = first_scene_event(s, tmp);
  if (s.tmp == 1)
    s = second_scene_event(s, tmp);
  if (s.tmp == 2)
    s = third_scene_event(s, tmp);
  if (s.tmp == 3)
    s = forth_scene_event(s, tmp);
  if (s.tmp == 4)
    s = fifth_scene_event(s, tmp);
  if (s.tmp == 5)
    s = sixth_scene_event(s, tmp);
  if (s.tmp == 6)
    s = seventh_scene_event(s, tmp);
  return (s);
  sfTexture_createFromFile(g_img[0].name, NULL);
}

t_hero	event(t_window *window, t_hero s, sfMusic* music)
{
  sfEvent	event;
  sfVector2i	tmp;

  tmp = s.mouse_pos;
  while (sfRenderWindow_pollEvent(window->window, &event))
    {
      if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
        sfRenderWindow_close(window->window);
      if ((sfMouse_isButtonPressed(sfMouseRight)) == sfTrue)
        s.mouse_pos = sfMouse_getPositionRenderWindow(window->window);
      if (sfKeyboard_isKeyPressed(sfKeyM) == sfTrue)
        {
          sfMusic_destroy(music);
          menu(window);
        }
      s = dispatch_event(s, tmp);
    }
  return (s);
}
