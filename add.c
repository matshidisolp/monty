#include "monty.h"

/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_add(stack_t **head, unsigned int counter)
{
	if (!head || !*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		handle_error_and_exit();
	}

	(*head)->next->n += (*head)->n;
	*head = pop_stack(*head);
}
