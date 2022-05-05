#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])

{

int a, b, p;

printf("Enter two numbers: ");

scanf("%lf %lf", &a, &b);

p = a * b;

printf("p = %.2lf", p);

return (0);

}
