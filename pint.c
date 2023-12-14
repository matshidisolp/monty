#include "monty.h"

/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (!head || !*head)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		handle_error_and_exit();
	}

	printf("%d\n", (*head)->n);
}
