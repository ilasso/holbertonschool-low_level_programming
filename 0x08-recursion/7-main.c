#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("abcddcba");
    printf("%d\n", r);
    r = is_palindrome("abcdcba");
    printf("%d\n", r);
    r = is_palindrome("abcdecba");
    printf("%d\n", r);
    r = is_palindrome("I guess I thought the dream-space would be all about the visual, but it's more about the feeling. My question is what happens when you start messing with the physics of it.ti fo scisyhp eht htiw gnissem trats uoy nehw sneppah tahw si noitseuq yM .gnileef eht tuoba erom s'ti tub ,lausiv eht tuoba lla eb dluow ecaps-maerd eht thguoht I sseug I");
    printf("%d\n", r);
/*    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("holberton");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);*/
    return (0);
}
