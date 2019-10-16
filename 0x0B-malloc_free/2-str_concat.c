#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat    - function that concatenates two strings.
 * @s1   : string 1
 * @s2   : string 2
 * Return:   pointer to char. string cat
 * On error, -1 is returned, and errno is set appropriately.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *a;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
	;
	for (len2 = 0; s2[len2] != '\0'; len2++)
	;

	a = (char *)malloc(((len1 + 1) * sizeof(char)) + ((len2 + 1) * sizeof(char)));

	if (a == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0' && !(s1 == NULL))
	{
		a[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && !(s2 == NULL))
	{
		a[i] = s2[j];
		j++;
		i++;
	}
	return (a);
}
