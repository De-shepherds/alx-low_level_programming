#include "lists.h"

/**
 * free_list - frees a list.
 * @head: A pointer to the head of the linked list.
 * Return: No return value.
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}

