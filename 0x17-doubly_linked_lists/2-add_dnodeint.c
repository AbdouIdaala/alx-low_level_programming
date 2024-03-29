#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of the dlistint_t
 * @head: double pointer to the head of the dlistint_t
 * @n: data of the new node
 * Return: the address of the new element, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (temp)
	{
		new->next = temp;
		temp->prev = new;
	}

	*head = new;

	return (*head);
}
