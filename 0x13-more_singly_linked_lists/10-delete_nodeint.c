#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 * Date: 04-04-2023
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *old;
	listint_t *recent;

	old = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && old != NULL; i++)
		{
			old = old->next;
		}
	}

	if (old == NULL || (old->next == NULL && index != 0))
	{
		return (-1);
	}

	recent = old->next;

	if (index != 0)
	{
		old->next = recent->next;
		free(recent);
	}
	else
	{
		free(old);
		*head = recent;
	}

	return (1);
}
