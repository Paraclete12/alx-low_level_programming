#include "lists.h"

/**
 * pop_listint - this function deletes the head node pointer
 * @head: head pointer.
 * Return: head data.
 * Date: 04-04-2023
 */
int pop_listint(listint_t **head)
{
	int headNode;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	headNode = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (headNode);
}
