#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints a to z in small letters
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
