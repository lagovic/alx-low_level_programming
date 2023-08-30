#include "lists.h"
/**
 * free_listint - frees listint_t list
 * @head: pointer to begin the list ot be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tep;

	while (head != NULL)
	{
		tep = head;
		head = head->next;
		free(tep);
	}
}
