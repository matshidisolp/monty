#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	(void)counter;

	if (!head || !*head)
	{
		printf("\n");
		return;
	}

	for (stack_t *h = *head; h && h->n > 0 && h->n <= 127; h = h->next)
		printf("%c", h->n);
	printf("\n");
}
