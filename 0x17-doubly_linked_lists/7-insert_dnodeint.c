#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: double pointer to the head of dlistint_t
 * @idx: the position of the new node
 * @n: the data (n) of the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *temp = *h;
	dlistint_t *ptr = *h;
	__u_int len = 0, i = 0;

	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	if (idx <= len)
	{
		while (ptr)
		{
			if (i == idx)
			{
				new->prev = ptr->prev;
				new->next = ptr;
				ptr->prev->next = new;
				ptr->prev = new;
			}
			i++;
			ptr = ptr->next;
		}
	}
	else
		return (NULL);
	return (*h);
}
