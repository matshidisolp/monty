#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	for (; head; head = head->next)
	{
		free(head);
	}
}
