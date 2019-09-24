#include "holberton.h"
/**
 * _isalpha - say if a character is a letter lower or upper
 * @c: argument input to evaluate
 * Return: 1 if char is lower, or upper else return 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);
}
