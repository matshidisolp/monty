#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_mod(stack_t **head, unsigned int counter)
{
	if (!head || !*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		handle_error_and_exit();
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		handle_error_and_exit();
	}
	(*head)->next->n %= (*head)->n;
	*head = pop_stack(*head);
}

/**
 * pop_stack - removes the top element of the stack
 * @head: stack head
 * Return: new head of the stack
 */
stack_t *pop_stack(stack_t *head)
{
	if (!head)
		return (NULL);

	stack_t *new_head = head->next;

	free(head);
	return (new_head);
}
