#include "monty.h"

/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	if (!head || !*head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		handle_error_and_exit();
	}

	int value = (*head)->n;

	if (value > 127 || value < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		handle_error_and_exit();
	}

	printf("%c\n", value);
}
