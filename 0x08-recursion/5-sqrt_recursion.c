#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square rooot of a number
* @n: calcute its square root
*
* Return: square rootresult
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
* actual_sqrt_recursion - recurse to find natural square root of a number
* @n: number to calculate square root
* @i: Iterator
*
* Return: the resulting square root
*/
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
