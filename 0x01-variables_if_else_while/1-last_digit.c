#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the last digit of a randomly generated number
*and whether it is greater than 5. less than 6, or 0.
*
* Return: Alwaysa 0.
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND MAX / 2;
if ((n % 10) > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit of %d is % d and is less than 6 and not n, 0\n", n, n % 10);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}