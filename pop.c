#include "monty.h"

/**
 * f_pop - removes the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_pop(stack_t **head, unsigned int counter)
{
	if (!head || !*head)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		handle_error_and_exit();
	}

	stack_t *temp = *head;
	*head = temp->next;
	free(temp);
}
