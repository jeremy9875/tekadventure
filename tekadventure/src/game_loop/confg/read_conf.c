/*
** read_conf.c for tekadventure in /home/VSridhar78/Infographie/tekadventure
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Sun May 28 22:54:39 2017 Sridhar Vengadesan
** Last update Sun May 28 23:39:27 2017 Sridhar Vengadesan
*/

#include "my.h"
#include "windows.h"

int	my_strline(char *str, int tmp, int nb)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  if (tmp == 1)
      while (str[i] != '\0')
        {
          if (str[i] == '\n')
            ++count;
          ++i;
        }
  else if (tmp == 0)
    {
      while (str[nb] != '\n')
        {
          ++nb;
          ++count;
        }
    }
  return (count);
}

char	**cpy_in_2d(char *str, char **tab)
{
  int	i;
  int	j;
  int	tmp;

  i = 0;
  j = 0;
  tmp = 0;
  while (tmp != (my_strline(str, 1, 0)))
    {
      while (str[i] != '\n')
        {
	  tab[tmp][j] = str[i];
	  ++j;
          ++i;
        }
      /*      if (str[i] == '\n' && j != 0)
        tab[tmp][j] = str[i];*/
      ++tmp;
      j = 0;
      ++i;
    }
  return (tab);
}

char	**malloc_2dtab(char *str)
{
  char	**tab;
  int	i;
  int	tmp;

  i = 0;
  tmp = 0;
  if ((tab = malloc(sizeof(char *) * my_strline(str, 1, 0))) == NULL)
    return (NULL);
  while (tmp != (my_strline(str, 1, 0)))
    {
      if ((tab[tmp] = malloc(sizeof(char) * (my_strline(str, 0, i) + 1)))
          == NULL)
        return (NULL);
      ++tmp;
      ++i;
    }
  tab = cpy_in_2d(str, tab);
  return (tab);
}

t_conf		parse_file(int fd, t_conf c)
{
  char		*buf;
  char		**tmp;

  buffer = malloc(sizeof(char) * 20000);
  read(confg, buffer, 3000);
  tmp = malloc_2dtab(buf);
  c.node1_x = atoi(tmp[2]);
  c.node1_y = atoi(tmp[3]);
  c.node2_x = atoi(tmp[4]);
  c.node2_y = atoi(tmp[5]);
  c.node3_x = atoi(tmp[8]);
  c.node3_y = atoi(tmp[9]);
  c.node4_x = atoi(tmp[10]);
  c.node4_y = atoi(tmp[11]);
  c.depth = atoi(tmp[14]);
  c.name[0] = tmp[17];
  c.name[1] = tmp[18];
  c.name[2] = tmp[19];
  c.name[3] = tmp[20];
  c.name[4] = tmp[21];
  c.name[5] = tmp[22];
  c.name[6] = tmp[23];
  return (c);
}

t_conf		read_conf()
{
  t_conf	c;
  int		fd;

  fd = open(CONF_PATH, O_RDONLY);
  if (fd == -1)
    return (NULL);
  c = parse_file(fd, c);
  return (c);
}
