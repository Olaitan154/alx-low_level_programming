#include <stdio.h>
/**
* Description: main - program that prints the alphabet in lowercase,
* and then in uppercase,
* You can only use the putchar
* Return: Always 0 (Success)
*/
int main(void)
{
int lw = 'a';
int up = 'A';
while (lw <= 'Z')
{
putchar(lw);
lw += 1;
}
while (up <= 'Z')
{
putchar(up);
up += 1;
}
putchar('\n');
return (0);
}
