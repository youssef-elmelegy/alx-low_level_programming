#include "main.h"

/**
 * _puts_recsion - prints a string, followed vy a new line
 * @s: pointer to the string 
 * Return: void
*/

void _puts_recursionn(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
