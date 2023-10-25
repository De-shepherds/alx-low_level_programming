#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a certain index.
 * @head: A pointer to the first element in the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if it Succeeds, or -1 if it Fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t current;
	listint_t *next;

current = *head;

if (index != 0)
{
for (i = 0; i < index - 1 && current != NULL; i++)
{
current = current->next;
}
}

if (current == NULL || (current->next == NULL && index != 0))
{
return (-1);
}

next = current->next;

if (index != 0)
{
current->next = next->next;
free(next);
}
else
{
free(current);
*head = next;
}

return (1);
}
