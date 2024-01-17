#include "monty.h"
#include <stdio.h>
#include <stddef.h>

/**
 * pall - print the stack
 * @stack: first integer
 * @num: second number
 * Return: no return
 */

void pall(stack_t **stack, unsigned int num)
{
  stack_t *tmp = *stack;
  (void)num;

  while (tmp != NULL)
  {
    printf("%d\n", tmp->n);
    tmp = tmp->next;
  }
}
