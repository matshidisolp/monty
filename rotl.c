#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	if (!head || !*head || !(*head)->next)
		return;

	stack_t *tmp = *head;
	stack_t *aux = (*head)->next;

	aux->prev = NULL;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	*head = aux;
}
