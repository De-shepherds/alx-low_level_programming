#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the linked list.
 * @str: The string to store in the list.
 * Return: A pointer to the new head of the list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[str_len])
		str_len++;

	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

