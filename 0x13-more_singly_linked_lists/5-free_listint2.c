#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * by setting head to NULL.
 * @head: head of a list.
 * Return: void.
 * Date: 04-04-2023
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *currentNode;

	if (head != NULL)
	{
		currentNode = *head;
		while ((temp = currentNode) != NULL)
		{
			currentNode = currentNode->next;
			free(temp);
		}
		*head = NULL;
	}
}
