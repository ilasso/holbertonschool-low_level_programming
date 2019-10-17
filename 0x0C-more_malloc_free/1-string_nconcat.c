#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1   : string 1
 * @s2   : string 2
 * @n    : pos to cat
 * Return:   pointer to char. string cat
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *a;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int alloc = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
	;
	for (len2 = 0; s2[len2] != '\0'; len2++)
	;
	if (n >= len2)
	{
		alloc = len1 * sizeof(char) + len2 * sizeof(char) + 1;
		n = len2;
	}
	alloc = len1 * sizeof(char) + n * sizeof(char) + 1;
	a = (char *)malloc(alloc);
	if (a == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0' && !(s1 == NULL))
	{
		a[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && !(s2 == NULL) && j < n)
	{
		a[i] = s2[j];
		j++;
		i++;
	}
	a[i] = '\0';
	return (a);
}
