#include <stdio.h>

/**
* Description: main - program that prints the lowercase alphabeth in reverse.
* You can only use the putchar function
* Return: 0
*/

int main(void)
{
int n = 122;
while (n > 96)
{
putchar (n);
n -= 1;
}
putchar ('\n');
return (0);
}
