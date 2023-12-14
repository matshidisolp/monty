#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: not used
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int counter)
{
	(void)counter;

	if (!head || !*head)
		return;

	for (stack_t *h = *head; h; h = h->next)
		printf("%d\n", h->n);
}
