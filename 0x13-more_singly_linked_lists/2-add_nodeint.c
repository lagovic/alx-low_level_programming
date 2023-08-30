#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of a listint_t list.
 * @head: pointer to first element node of the list
 * @n: elements to be added to the new node
 *
 * Return: address of the new element or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}
