#include "lists.h"
/**
 * add_nodeint_end - This adds a new node at the end of list.
 * @head: pointer to node
 * @n: value of node
 * Return: address of new element or NULL if failed
 * Date: 04-04-2023
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	temp = *head;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newNode;
	}

	return (*head);
}
