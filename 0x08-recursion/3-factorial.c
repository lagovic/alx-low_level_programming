#include "main.h"
/**
* factorial - Returns factorial of a number
* @n: number to return the factorial from
* Return: factorial of n
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (n * factorial(n - 1));
}