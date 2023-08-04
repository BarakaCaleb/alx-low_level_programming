#include <stdio.h>
		
#include "main.h"
		

		
/**
		
 * _putchar -This writes the character c to stdout
		
 * @c:The character to print
		
 *
		
 * Return: On success 1.
		
 * On error, -1 it to be returned and errno is set appropriately.
		
 */
		
int _putchar(char c)
		
{
		
return (write(1, &c, 1));
		
}

