/*
** get_config.c for get_config in /home/arnaud.d/tekadventure/src/game_loop/options
** 
** Made by Arnaud DEMANGE
** Login   <arnaud.d@epitech.net>
** 
** Started on  Tue May 23 12:07:57 2017 Arnaud DEMANGE
** Last update Tue May 23 15:16:46 2017 Arnaud DEMANGE
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

void	display_lore()
{
  int   file;
  char  lore[255];

  file = open(LORE_PATH, O_RDONLY);
  read(file, lore, 256);
  if (file)
    {
      printf("%s", lore);
    }
}

void	display_help()
{
  int	file;
  char	help[255];

  file = open(README_PATH, O_RDONLY);
  read(file, help, 256);
  if (file)
    {
      printf("%s", help);
    }
}

int	ready_to_play()
{
  int	confg;

  confg = open(CONF_PATH, O_RDONLY);
  if (confg == -1)
    {
      printf("Something went wrong: no .ini found\n");
      return (1);
    }
  close(confg);
  return (0);
}
