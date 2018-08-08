/*
** my.h for my in /home/d.kevin/tekadventure_new/include
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Thu May 11 13:51:16 2017 Kevin DA PONTE
** Last update Sun May 28 23:32:45 2017 Sridhar Vengadesan
*/

#ifndef MY_H_
# define MY_H_

# include "unistd.h"
# include "stdlib.h"
# include "windows.h"

# define IMG1		"img/Map_Jeux/simple_map/manor/1.png"
# define IMG2		"img/Map_Jeux/simple_map/manor/2.png"
# define IMG3		"img/Map_Jeux/simple_map/manor/3.png"
# define IMG4		"img/Map_Jeux/simple_map/manor/4.png"
# define IMG5		"img/Map_Jeux/simple_map/manor/5.png"
# define IMG6		"img/Map_Jeux/simple_map/manor/6.png"
# define IMG7		"img/Map_Jeux/simple_map/manor/7.png"
# define README_PATH	"src/game_loop/confg/README"
# define CONF_PATH	"src/game_loop/confg/config.ini"
# define LORE_PATH	"src/game_loop/confg/lore.txt"
# define GO		"GO"
# define NOTHING	""

typedef enum		e_id_img
  {
    IMG1_0,
    IMG2_1,
    IMG3_2,
    IMG4_3,
    IMG5_4,
    IMG6_5,
    IMG7_6,
  }			t_id_img;

typedef struct		s_img
{
  const char		*name;
  t_id_img		id;
}			t_img;

typedef struct		s_conf
{
  int			node1_x;
  int			node1_y;
  int			node2_x;
  int			node2_y;
  int			node3_x;
  int			node3_y;
  int			node4_x;
  int			node4_y;
  int			depth;
  char			**name;
}			t_conf;

void		my_putchar(char c);
void		my_putstr(char *str);
void		display_help();
void		display_lore();
int		ready_to_play();
char		*init_parse();
t_conf		read_conf();
sfVector2f	vector2f(float x, float y);

#endif /* !MY_H_ */
