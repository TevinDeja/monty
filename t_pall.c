#include "monty.h"

/*
 * t_pall - prints all elements in a stack
 * @head: double pointer to the stack
*/

void t_pall(stack_t **head)
{
	stack_t *current = *head;

	while (current != NULL)
	{
		printf("%d\n", current->number);
		current = current->next;
	}
}
