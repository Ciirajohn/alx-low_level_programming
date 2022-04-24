#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */

char *_strcat(char *dest, const char *src)
{
int h, i;


h =0;
while (dest[h] != '\0')
{
h++;
}

i = 0;
while (src[i] != '\0')
{
dest[h] = src[i];
i++;
h++;
}
dest[h] = '\0';

return (dest);

}
