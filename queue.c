#include "monty.h"
/**
 * addqueue - Function adds nodes to tail of stack.
 * @n: The new value to be added.
 * @head: The head of the stack.
 * Return: Void.
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
/**
 * f_queue - Function that prints the top.
 * @head: The head of the stack.
 * @counter: Number of the line.
 * Return: Void.
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}
