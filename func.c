#include "main.h"
/**
 * push- add a node at the beginning of a list
 * @head: head of the list
 * @n: node to be added
 * Return: address of the new node or NULL on failure
 */
void f_push(stack_t **head, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
}
/**
 * pall - prints all elements ofa linked list
 * @h: head of the list
 * Return: nothing
 */
void f_pall(stack_t *h)
{
	stack_t *temp = h;

	if (h == NULL)
	{
		exit(EXIT_FAILURE);
	}
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
