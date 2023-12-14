#include "monty.h"

/**
 * f_sub - subtraction
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	if (!head || !*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		handle_error_and_exit();
	}

	int result = (*head)->next->n - (*head)->n;

	(*head)->next->n = result;
	*head = pop_stack(*head);
}
