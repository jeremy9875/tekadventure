/*
** Vector2f.c for Vector2f in /home/VSridhar78/Infographie/tekadventure
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Tue May  2 15:02:37 2017 Sridhar Vengadesan
** Last update Fri May 12 15:22:42 2017 Kevin DA PONTE
*/

#include "my.h"
#include "windows.h"

sfVector2f	vector2f(float x, float y)
{
  sfVector2f	v;

  v.x = x;
  v.y = y;
  return (v);
}
