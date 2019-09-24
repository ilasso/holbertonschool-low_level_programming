#include "holberton.h"
/**
 * _islower - say if a character is lower or not
 * @c: - charatecte to evaluate
 *
 * Return: 1 if char is lower, else return 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
