#include "holberton.h"
#include <stdio.h>
#include <strings.h>

char GetNumber1337(char a);

/**
 * leet     - function that encodes a string into 1337
 * @s : pointer a string
 * Return:  pointer a char
 * On error, -1 is returned, and errno is set appropriately.
 */



char *leet(char *s)
{
	char k;
	char *b;

	b = s;

	while (*s != '\0')
	{
		k = GetNumber1337(*s);
		*s = k;
		s++;
	}
	s = b;
	return (s);
}

/**
 * GetNumber1337 - return number give a letter by 1337
 * @a : letter in
 * Return: number 1337
 * On error, -1 is returned, and errno is set appropriately.
 */

char GetNumber1337(char a)
{
	char equiv1337[11][2] = {
					{65, 52},
					{97, 52},
					{69, 51},
					{101, 51},
					{79, 48},
					{111, 48},
					{101, 48},
					{116, 55},
					{84, 55},
					{108, 49},
					{76, 49}
				};
	int i;

	for (i = 0; i < 11 ; i++)
	{
		if (equiv1337[i][0] == a)
		{
			return (equiv1337[i][1]);
		}
	}
	return (a);
}
