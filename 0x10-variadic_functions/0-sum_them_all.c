#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Return the sum of all its parameters
* @n: The number of all its parameters in the function.
* @...: Number of parameters to calculate their sum
* Return:  0 If n == 0
* Otherwise - Return sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{

va_list args;
unsigned int i;
unsigned int sum;

va_start(args, n);
for (i = 0; i < n; i++)
sum += va_arg(args, int);

va_end(args);
return (sum);
}
