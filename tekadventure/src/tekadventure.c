/*
** tekadventure.c for tekadventure in /home/d.kevin/tekadventure_new/src
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Thu May 11 14:08:26 2017 Kevin DA PONTE
** Last update Fri May 26 12:35:58 2017 Arnaud DEMANGE
*/
#include <stdio.h>
#include <string.h>
#include "my.h"
#include "windows.h"
#include "menu.h"

int		main(int argc, char **argv)
{
  t_window	window;

  if (argc == 2)
    {
      if (strcmp("--help", argv[1]) == 0)
	{
	  display_help();
	  return (0);
	}
      if (strcmp("--lore", argv[1]) == 0)
	{
	  display_lore();
	  return (0);
	}
    }
  else if (ready_to_play() == 0)
    {
      if (!create_window(&window))
	return (ERROR);
      menu(&window);
      return (0);
    }
  return (84);
}
