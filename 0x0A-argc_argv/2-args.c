#include <stdio.h>
#include "main.h"

/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
*
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])

{
int counter;

for (counter =0; counter < agrc; counter++)
{

printf("argv[%2d]: %s\n", counter, argv[counter]);

}

return (0);

}
