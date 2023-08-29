#include "lists.h"
/**
 * list_len - calculate number of elements of a linked list
 * @h: the list to be calculated
 * Return: The length
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
