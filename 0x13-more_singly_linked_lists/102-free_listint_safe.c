#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to the pointer to the head of the list.
 * Return: The size of the list that was free'd.
 * Date: 09-04-2023
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		if (next >= current)
			break;
		current = next;
	}
	*h = NULL;

	return (count);
}

