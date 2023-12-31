#include "lists.h"
#include <string.h>
#include <stdlib.h>
size_t str_len(char *str);
/**
 * add_node_end - adds a new node to the end of linked list
 * @head: pointer to the start of the linked list
 * @str: string to add to the new node
 * Return: address of the new element and NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
        list_t *new, *tmp;
        if (str == NULL)
                return (NULL);
        new = malloc(sizeof(list_t));
        if (new == NULL)
                return (NULL);
        new->str = strdup(str);
        if (new->str == NULL)
        {
                free(new);
                return (NULL);
        }
        new->len = str_len(new->str);
        new->next = NULL;
        if (*head == NULL)
        {
                *head = new;
                return (new);
        }
        tmp = *head;
        while (tmp->next)
                tmp = tmp->next;
        tmp->next = new;
        return (new);
}
size_t str_len(char *str);
/**
 * str_len - finds the length of a string
 * @str: string to be checked the length
 * Return: length of string
 */
size_t str_len(char *str)
	{
        size_t count = 0;
        for (; str[count]; count++);
        return (count);
}
