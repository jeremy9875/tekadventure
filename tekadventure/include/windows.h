/*
** windows.h for windows in /home/d.kevin/tekadventure_new/include
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Thu May 11 13:53:37 2017 Kevin DA PONTE
** Last update Sun May 28 22:38:58 2017 Sridhar Vengadesan
*/

#ifndef WINDOWS_H_
# define WINDOWS_H_

# include <stdbool.h>
# include <SFML/Graphics.h>
# include <SFML/Audio.h>
# include <SFML/System.h>

# define WINDOW_TITLE		"Tekadventure"
# define WINDOW_WIDTH		1920
# define WINDOW_HEIGHT		1080
# define BITS_PER_PIXEL		32
# define NB_SPRITE		1
# define ERROR			84

typedef struct			s_window
{
  sfRenderWindow		*window;
  sfVideoMode			mode;
}				t_window;

bool	create_window(t_window *window);

#endif /* !WINDOWS_H_ */
