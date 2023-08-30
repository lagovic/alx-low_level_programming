#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list, 
 * and returns the head node’s data (n)
 * @head: pointer to first of head node.
 *
 * Return: 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (*head == NULL)
		return (num);

	if (head == NULL)
		return (num);

	temp = *head;
	num = temp->n;
	temp = (*head)->next;
	free(temp);
	
	return (num);
}
