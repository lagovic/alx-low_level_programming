#include "lists.h"
/**
 * free_listint2 - frees listint_t list and sets *head to null.
 * @head: pointer to pointer of first node of list to free.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
		*head = temp->next;
	}
}
