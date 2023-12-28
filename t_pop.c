#include "monty.h"

/**
 * t_pop - Function removes the top element from stack
 * @stack: double pointer to the stack
 * @line_number: line number of the file
 */
void t_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *thead;

	if (!*stack || !stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	thead = *stack;
	*stack = thead->next;

	if (*stack)
		(*stack)->prev = NULL;
	free(thead);
}
