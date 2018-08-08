/*
** my_putchar.c for my_putchar.c in /home/d.kevin/delivery/tekadventure/lib/my
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Tue Apr  4 13:18:01 2017 Kevin DA PONTE
** Last update Fri May 12 15:21:49 2017 Kevin DA PONTE
*/

#include <unistd.h>
#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
