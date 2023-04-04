#include "lists.h"

/**
 * add_nodeint - This function adds new node at beginning of list
 * @head: pointer to new node
 * @n: value of new node
 * Date: 04-04-2023
 * Return: address to new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
