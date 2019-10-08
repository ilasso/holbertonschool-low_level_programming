#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * _strstr  - function that locates a substring.
 * @haystack :   input string
 * @needle:  character to find firts occurrence
 * Return:Returns a pointer to the byte in s that matches one of the bytes in
 *		accept, or NULL if no such byte is found
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int sw = 0;
	int counter = 0;

	sw = sw + 0;


	for (i = 0 ; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0' ; j++)
		{
			if (haystack[j] == needle[i])
			{
				sw = 1;
				counter++;
			}
		}
	}
	if (counter)
	{
		return (haystack + counter - 1);
	}

return (NULL);
}
