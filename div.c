#include "monty.h"

/**
 * f_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;

	if (!h || !(h->next))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		handle_error_and_exit();
	}

	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		handle_error_and_exit();
	}

	h->next->n /= h->n;
	*head = h->next;
	free(h);
}

/**
 * handle_error_and_exit - handles errors, frees resources, and exits.
 */
void handle_error_and_exit(void)
{
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
