#include "main.h"
/**
 * print_rev - prints a string in reverse order
 *@s: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void print_rev(char *s)
{
int p;

p = 0;
while (s[p] != '\0')
{
p++;
}

for (p = p - 1 ; 1 >= 0; p--)
{
_putchar (s[p]);
}

_putchar ('\n');
}
