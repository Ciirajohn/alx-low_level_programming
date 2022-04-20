#include "main.h"

/**
 *_strlen -length of a string
 *@s: A pointer to an int that will be changed/updated
 *
 *Return: void that means our answer is correct
 */

int _strlen(char *s)
{
int i;


i = 0;
for (i = 0; s[i] != '\0'; ++i);

printf("Length of the string: %d", i);

return 0;
