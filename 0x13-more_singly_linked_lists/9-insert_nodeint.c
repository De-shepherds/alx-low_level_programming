#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list at a given position.
 * @head: A pointer to the first node in the list.
 * @idx: The index where the new node is added.
 * @n: The data to insert in the new node.
 *
 * Return: A pointer to the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;


	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}

	return (new);
}
