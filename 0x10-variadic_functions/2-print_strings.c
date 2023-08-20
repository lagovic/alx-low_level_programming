#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - prints strings followed by new line
* @separator: string to print between the strings
* @n: Number of  strings to print.
* @...: Number of strings to be printed
* If seperator is NUll: do not print
* If one of the string is NULL, print (nil) instead
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char *str;
unsigned int i;

va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("nil");
else
printf("%s", str);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
