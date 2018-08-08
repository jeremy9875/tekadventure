/*
** my_putstr.c for my_putstr in /home/d.kevin/delivery/tekadventure/lib/my
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Tue Apr  4 15:29:28 2017 Kevin DA PONTE
** Last update Fri May 12 15:22:03 2017 Kevin DA PONTE
*/

#include <unistd.h>
#include "my.h"

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      write(1, str, 1);
      str++;
    }
}
