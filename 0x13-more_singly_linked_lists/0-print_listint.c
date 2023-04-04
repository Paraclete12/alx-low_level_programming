#include "lists.h"

/**
 * print_listint - this function prints the elment of listint
 * @h: pointer to new node.
 * Return: Pointer to Node.
 * Date: 04-04-2023
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
