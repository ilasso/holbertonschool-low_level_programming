#include "holberton.h"
#include <stdio.h>

/**
 * set_string -  function that sets the value of a pointer to a char
 * @s    :   pointer to  pointer to char(doble point)
 * @to   :   pointer to  char
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 * Anne Cognet, Asaia Palacios
 * Anne Cognet, Anne Cognet
 * s -- > &Asaia Palacios, to Anne Cognet ---> Anne Cognet,Anne Cognet
 */

void set_string(char **s, char *to)
{

	/*hay q cambiar a s1 por anne cognet osea que s1 debe apuntar a s0*/

	*s = to;

}
