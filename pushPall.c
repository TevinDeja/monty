#include "monty.h"

/**
 * push - Pushes an element to the stack
 * @stack: Double pointer to head node of stack
 * @line_number: Current line number
 *
 * Return: void
*/ 
void push(stack_t **stack, unsigned int line_number)
{
    int n;

    if (!token[1])
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }  
    n = atoi(token[1]);                         
    add_node(stack, n);
}

/**  
 * pall - Print values on stack from top down
 * @stack: A pointer to the head node of stack
 *
 * Return: void
 */
void pall(stack_t **stack)
{
    stack_t *current = *stack;
    
    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }   
}
