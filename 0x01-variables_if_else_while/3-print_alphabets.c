#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
  char c_s = 'a';

  char c_l = 'A';

  while (c_s <= 'z')
  {
    putchar(c_s);
    c_s++;
  }
  while (c_l <= 'Z')
  {
    putchar(c_l);
    c_l++;
  }
  putchar('\n');
  return (0);
}
