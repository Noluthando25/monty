#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1;

/**
 * pint - prints the value at the top of the stack
 * Return: void
 */
void pint(void)
{
    if (top == -1)
    {
        fprintf(stderr, "L<line_number>: can't pint, stack empty\n");
        exit(EXIT_FAILURE);
    }
    printf("%d\n", stack[top]);
}
