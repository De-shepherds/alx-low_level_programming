#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the linked list.
 * @str: The string to store in the list.
 * Return: A pointer to the head of the list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
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
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	}

	return (*head);
}

