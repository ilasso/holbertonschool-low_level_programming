#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    /*char *s = "hello, world";*/
    char *s = "First, solve the problem. Then, write the code.";
    /*char *f = "world";*/
    char *f = "solve";
    char *t;
    t = _strstr(s, f);
    printf("%s\n", t);
    t = strstr(s, f);
    printf("%s\n", t);
    return (0);
}
