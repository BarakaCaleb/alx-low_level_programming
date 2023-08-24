#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints Elements of a linked list
 * @h: pointer to the list_t list to be printed
 *
 * Return: The  number of nodes that are to  printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
