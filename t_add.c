#include "monty.h"

/**
 * t_add - Adds the top two elements of a stack
 * @stack: Double pointer to the head node
 * @line_number: Current line number
 */

void t_add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	(*stack) = (*stack)->next;
	(*stack)->n += tmp->n;
	(*stack)->prev = NULL;
	free(tmp);
}
