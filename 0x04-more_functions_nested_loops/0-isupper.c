#include "main.h"

/**
 * _isupper - This program checks if the character is an uppercase letter
 * @c: The character to be checked
 *
 * Return: 1 if c is an uppercase letter, 0 else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
