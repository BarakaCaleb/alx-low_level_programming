#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beggining of the linked list
 *
 * @head: The pointer to the first node in the linked list
 *
 * @n: The data to insert in that bew code
 *
 * Return : Pointer to the new node or to NULL
 */


listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
