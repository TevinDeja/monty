#include "monty.h"

/**
 * f_pall - Function that prints the stack
 * @head: stack head
 * @counter: counter
 *
 * Return: 0
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *p;
	(void)counter;

	p = *head;
	if (p == NULL)
		return;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}
