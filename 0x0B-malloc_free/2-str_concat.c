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
/*char *_strncat(char *dest, char *src, int n)*/
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *a;
	int len1;
	int len2;
	int sizes1; 
	int sizes2; 


	/* len s1 */
	for (len1 = 0; s1[len1] != '\0'; len1++)
	;

	/* len s2 */
	for (len2 = 0; s2[len2] != '\0'; len2++)
	;

	sizes1 = sizeof(char) * (len1 + 1);
	sizes2 = sizeof(char) * (len2 + 1);


	a = (char *) malloc(sizes1 + sizes2);

	if ( a == NULL)
	{
		return (NULL);
	}



	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		a[i] = s2[j];
		j++;
		i++;
	}

	return (a);
}
