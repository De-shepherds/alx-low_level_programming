#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: A pointer to the singly linked list.
 * Return: The number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nelem = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%lu] %s\n", 0, "(nil)");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}

	return nelem;
}

