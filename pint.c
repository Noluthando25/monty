#include "monty.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * pint - prints the value at the top of the stack
 * @stack: first integer
 * @line_number: second integer
 * Return: 0
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
