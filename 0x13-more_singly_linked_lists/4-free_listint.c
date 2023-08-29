#include "lists.h"


/**
 * free_listint - frees the linked list
 * @head: lisint_t that is to be freed
 */


void free_listint(listint_t *head);
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
