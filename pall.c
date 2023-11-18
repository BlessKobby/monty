#include "monty.h"
/**
 * f_pall - Function prints the stack.
 * @head: The head of the stack.
 * @counter: The number of the line.
 * Return: Nothing.
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
