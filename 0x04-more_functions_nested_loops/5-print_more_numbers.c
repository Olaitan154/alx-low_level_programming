#include "main.h"
/**
* more_numbers - prints 10 times the number, from 0 to 14
* followed by a new line
*/
void print_more_numbers(void)
{
int i,j;
for (i = 0, i < 10; i++)
{
for (j = 0; < 15; j++)
{
if (j >= 10)
_putchar (j / 10 + '0');
_putchar (j % 10 + '0');
}
_putchar ('\n')
}
}
