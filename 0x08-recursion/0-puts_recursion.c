#include "main.h"

/**
 * _puts_recursion - put like function
 * @s: input
 * Return: 0
 */
void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
