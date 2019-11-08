#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * print_binary-function that prints the binary representation of a number.
 *		 a linked listint_t list.
 * @n:  decimal to print binary notation
 * Return: len of a list
 * On error, return NULL
 */
void print_binary(unsigned long int n)
{
	unsigned long int a=1;
	unsigned long int b=0;

	while ( b < n)
	{
		b += n & a;
		/*printf("shif 1 a=%lu res=%lu\n", a,n&a);*/
		if(n&a)
			_putchar(49);
		else
			_putchar(48);
	
		a = a<<1;
	}

	_putchar('\n');
}

/**
 * add_nodeint_end-function that adds new node at the end of a listint_t list.
 * @head:  pointer to head of a list
 * @n:  data int of new element
 * Return: size of a list
 * On error, return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;

		}
			temp->next = new;

	}

	return (new);
}
