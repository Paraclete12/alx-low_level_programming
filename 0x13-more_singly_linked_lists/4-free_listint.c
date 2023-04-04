#include "lists.h"
/**
 * free_listint - a function that frees a linked list
 * @head: head of a list.
 * Return: void.
 * Date: 04-04-2023
 */
void free_listint(listint_t *head)
{
	listint_t *freeNode;

	while ((freeNode = head) != NULL)
	{
		head = head->next;
		free(freeNode);
	}
}
