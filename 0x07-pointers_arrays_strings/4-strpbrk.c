#include "main.h"
/**
*_strpbrk - locates the first occurrence in the string
*@s: string to be scanned
*@accept:character in str1 that matches one of the characters in str2
*Return: strings that matches any character specified in accept
*/

char *_strpbrk(char *s, char *accept)

{

   int j;

   while (*s != '\0')
   {
           j =0;
           while (accept[j] != '\0')
           {
                   if (*s == accept[j])
                   {
                           return (s);
                   }

                   j++;
            }

            s++;
    }
    return (0);

}
