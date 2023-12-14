#include "monty.h"

/**
 * f_rotr - rotates the stack to the bottom
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	if (!head || !*head || !(*head)->next)
		return;

	stack_t *last = *head;

	while (last->next)
		last = last->next;
	last->next = *head;
	last->prev->next = NULL;
	last->prev = NULL;
	(*head)->prev = last;
	*head = last;
}
