#include "main.h"
/**
 *factorial - factorial of a given number
 *@n: pointer block of memory to fill
 *Return: factorial
 */

int factorial(int n)
{
if (n == 0)

return (1);

else if (n <= 0)
return (-1);

else
return (factorial(n - 1) * n);


}
