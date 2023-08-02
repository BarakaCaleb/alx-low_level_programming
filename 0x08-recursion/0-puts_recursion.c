#include "main.h"
/**
 * _puts_recursion - Functions like puts();
 * @s: the input
 * Return: Always 0 (SUCCESS)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
