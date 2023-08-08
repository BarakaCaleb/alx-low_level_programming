#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of size @size
 * initializes elements with @c
 * @size: The size of the array created
 * @c: The character to initialize the array with
 *
 * Return: If success, a pointer to the allocated memory.
 * Otherwise it returns , NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
