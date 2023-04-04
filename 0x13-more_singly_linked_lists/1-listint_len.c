#include "lists.h"

/**
 * listint_len - this function prints number of the element.
 * @h: pointer to new node.
 * Return: Pointer to Node.
 * Date: 04-04-2023
 */
size_t listint_len(const listint_t *h)
{
	size_t index = 0;

	while (h != NULL)
	{
		h = h->next;
		index++;
	}
	return (index);
}
