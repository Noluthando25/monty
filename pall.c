#include "monty.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * pall - print the stack
 * @stack: first integer
 * @num: second number
 * Return: 0
 */

void pall(stack_t **stack, unsigned int num)
{
  stack_t *tmp = *stack;
  (void)num;

  tmp = *stack;
  if (tmp == NULL)
	  return;

  while (tmp)
  {
    printf("%d\n", tmp->n);
    tmp = tmp->next;
  }
}
