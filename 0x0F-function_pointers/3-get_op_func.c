#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - function that selects the correct function to perform
 *		the operation asked by the user
 * @s: operation symbol
 * Return: pointer to corret operation function
 * On error, return NULL
 */

int (*get_op_func(char *s)) (int, int) {
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i;

	i = 0;
	while (i < 5) /* para no comparar NULL */
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (*(ops[i]).f);
		}
		i++;
	}
return (NULL);

}
