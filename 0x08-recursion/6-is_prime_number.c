#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * is_prime_number- function that returns 1 if the input integer is 
 *		    a prime number, otherwise return 0.
 * @n :   input number
 * Return: int
 * On error, -1 is returned, and errno is set appropriately.
 */

int is_prime_number(int n)
{
	int i = 1 ;

	/*if ( n == 1)
	{
		printf("cer0 cond");
		return(0);
	}

	if ( n <= 0)
	{
		printf("primera cond");
		return(0);
	}

	if ((i - 1) == 2)
	{
		printf("segunda cond");
		return(1);
	}
	else
	{
		printf("tercera cond");
		return(0);
	}*/
	
	if ((n % i) == 0)
	{
		printf("cuarta cond");
		i++;
	}
	printf("i=%d\n",i);


	i = i + is_prime_number(n - 1);
	if ((i - 1) == 2)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
