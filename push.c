#include "monty.h"

/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0;

	if (!bus.arg || bus.arg[0] == '\0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		handle_error_and_exit();
	}

	if (bus.arg[j] == '-')
		j++;

	for (; bus.arg[j] != '\0'; j++)
	{
		if (!isdigit(bus.arg[j]))
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			handle_error_and_exit();
		}
	}

	n = atoi(bus.arg);

	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
