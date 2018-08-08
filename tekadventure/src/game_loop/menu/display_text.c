/*
** display_text.c for display_text in /home/VSridhar78/Infographie/tekadventure
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Wed May  3 11:39:36 2017 Sridhar Vengadesan
** Last update Tue May 23 16:01:57 2017 Kevin DA PONTE
*/

#include "my.h"
#include "menu.h"

sfText*		init_text(sfText* text, char *str,
			  int text_format, sfVector2f text_pos)
{
  sfFont*       font;
  sfFloatRect   text_size;
  sfVector2f    text_size2;

  font = sfFont_createFromFile("font/godzilla.ttf");
  if (!font)
    return (NULL);
  text = sfText_create();
  sfText_setString(text, str);
  sfText_setFont(text, font);
  sfText_setCharacterSize(text, text_format);
  text_size = sfText_getGlobalBounds(text);
  text_size2.x = text_size.width / 2;
  text_size2.y = text_size.height / 2;
  sfText_setOrigin(text, text_size2);
  sfText_move(text, text_pos);
  return (text);
}

bool	my_putstr_text(t_window *window, sfText* text, sfColor color)
{
  sfText_setColor(text, color);
  menu_draw_window(window, text);
  return (true);
}

void	display_options(t_window *window, t_text t, t_hero s, sfVector2i i)
{
  play(window, t, s, i);
  option(window, t, s, i);
  credit(window, t, s, i);
  my_exit(window, t, s, i);
}

sfVector2i	display_text(t_window *window, t_text t, t_hero s, sfVector2i i)
{
  if (i.x != 250)
    {
      usleep(15000);
      ++i.x;
    }
  my_putstr_text(window, t.title, sfColor_fromRGBA(0, 102, 204, i.x));
  my_putstr_text(window, t.title_2, sfColor_fromRGBA(0, 0, 0, i.x));
  if (i.x >= 30)
    ++i.y;
  display_options(window, t, s, i);
  return (i);
}
