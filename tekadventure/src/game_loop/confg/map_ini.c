/*
** get_config.c for get_config in /home/arnaud.d/tekadventure/src/game_loop/options
** 
** Made by Arnaud DEMANGE
** Login   <arnaud.d@epitech.net>
** 
** Started on  Tue May 23 12:07:57 2017 Arnaud DEMANGE
** Last update Sun May 28 22:46:06 2017 Sridhar Vengadesan
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

char	*map_parsing(char *str, int j)
{
  j = 0;

  while (str[j])
    {
      if (str[j] == '"' && str[j + 1] == '"')
        {
          str[j] = '\n';
          j++;
        }
      j++;
    }
  j = 0;
  while (str[j])
    {
      if (str[j] == '"')
        j++;
      j++;
    }
  return (str);
}

char		*parse_ini(int confg, char *str)
{
  char		*buffer;
  int		i;
  int		j;

  i = 0;
  j = 0;
  buffer = malloc(sizeof(char*) * 20000);
  read(confg, buffer, 3000);
  while (buffer[i])
    {
      if (buffer[i] == '"')
	{
	  while (buffer[i] != '\n')
	    {
	      str[j] = buffer[i];
	      i++;
	      j++;
	    }
	  str[j] = '\n';
	}
      i++;
    }
  free(buffer);
  map_parsing(str, j);
  return (str);
}

char	*init_parse()
{
  char	*str;
  int	confg;

  str = malloc(sizeof(char*));
  if (str == 0)
    return (NULL);
  confg = open(CONF_PATH, O_RDONLY);
  if (confg == -1)
    {
      printf("Something went wrong: no .ini found\n");
      return (NULL);
    }
  parse_ini(confg, str);
  close(confg);
  return (str);
}
