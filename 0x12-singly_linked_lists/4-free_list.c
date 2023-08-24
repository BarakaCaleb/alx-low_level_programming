#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this frees a linked list
 * @head: list_t list that is to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
