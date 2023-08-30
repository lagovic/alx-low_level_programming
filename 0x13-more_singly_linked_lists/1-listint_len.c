#include "lists.h"
/**
 * listint_len -function return number of elements in linked listint_t list.
 * @h: pointer to first node on the list.
 * Return: number of elements in list.
 */
size_t listint_len(const listint_t *h)
{
	int sumation;
	sumation = 0;
	while (h != NULL)
	{
		sumation++;
		h = h->next;
	}
	return (sumation);
}
