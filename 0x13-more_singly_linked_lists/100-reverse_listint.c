#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint -this function reverses a listint_t linked list.
  * @head: pointer to first node
 . * Return: a pointer to the first node of the reversed list.
  * Date: 09-04-2023
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}

		*head = prev;
		return (*head);
	}

	return (NULL);
}

