#include "holberton.h"
/**
* _puts_recursion - fuction that prints a string
*
* @s: string to receive
*
* Return: Nothing
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar ('\n');
return;
}
_putchar (*s);
s++;
_puts_recursion(s);
}
