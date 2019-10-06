#include "holberton.h"
#include <stdio.h>
#include <strings.h>



char GetRot13(char a);

/**
 * rot13    - function that encodes a string into 1337
 * @s : pointer a string
 * Return:  pointer a char
 * On error, -1 is returned, and errno is set appropriately.
 */



char *rot13(char *s)
{
	char k;
	char *b;

	b = s;

	while (*s != '\0')
	{
		k = GetRot13(*s);
		*s = k;
		s++;
	}
	s = b;
	return (s);
}

/**
 * GetRot13 - return number give a letter by Rot13
 * @a : letter in
 * Return: number Rot13
 * On error, -1 is returned, and errno is set appropriately.
 */

char GetRot13(char a)
{
	char equivRot13[52][2] = {
					{'A', 'N'},
					{'B', 'O'},
					{'C', 'P'},
					{'D', 'Q'},
					{'E', 'R'},
					{'F', 'S'},
					{'G', 'T'},
					{'H', 'U'},
					{'I', 'V'},
					{'J', 'W'},
					{'K', 'X'},
					{'L', 'Y'},
					{'M', 'Z'},
					{'N', 'A'},
					{'O', 'B'},
					{'P', 'C'},
					{'Q', 'D'},
					{'R', 'E'},
					{'S', 'F'},
					{'T', 'G'},
					{'U', 'H'},
					{'V', 'I'},
					{'W', 'J'},
					{'X', 'K'},
					{'Y', 'L'},
					{'Z', 'M'},
					{'a', 'n'},
					{'b', 'o'},
					{'c', 'p'},
					{'d', 'q'},
					{'e', 'r'},
					{'f', 's'},
					{'g', 't'},
					{'h', 'u'},
					{'i', 'v'},
					{'j', 'w'},
					{'k', 'x'},
					{'l', 'y'},
					{'m', 'z'},
					{'n', 'a'},
					{'o', 'b'},
					{'p', 'c'},
					{'q', 'd'},
					{'r', 'e'},
					{'s', 'f'},
					{'t', 'g'},
					{'u', 'h'},
					{'v', 'i'},
					{'w', 'j'},
					{'x', 'k'},
					{'y', 'l'},
					{'z', 'm'}
				};
	int i;


	for (i = 0; i < 52 ; i++)
	{
		if (equivRot13[i][0] == a)
		{
			return (equivRot13[i][1]);
		}
	}

	return (a);
}
