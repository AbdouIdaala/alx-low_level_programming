#include "lists.h"

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
		return (new);
	}
	ptr = (*head);
	while (ptr)
	{
		if (++i == idx)
		{
			new->next = ptr->next;
			ptr->next = new;
		}
		ptr = ptr->next;
	}
	if (idx > i)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
