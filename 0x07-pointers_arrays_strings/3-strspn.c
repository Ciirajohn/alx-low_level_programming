#include "main.h"
/**
*_strspn - locates  character in a string
*@s: string to be sccaned for the character
*@accept: This is the string containing the list of characters
*Return: return count
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++;
			}
		}
		else
			return (count);

	}
	return (count);
}
