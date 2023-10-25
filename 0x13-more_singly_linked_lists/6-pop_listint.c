#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: A pointer to the first element in the linked list.
 *
 * Return: The data inside the element that was deleted, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *temp;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	temp = curr->next;

	free(curr);

	*head = temp;

	return (hnode);
}
