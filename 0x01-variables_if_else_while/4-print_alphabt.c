#include <stdio.h>
/**
* Description: main - program that prints the alphabet in lowercase,
* followed by a new line
* You can only use the putchar
* Return: Always 0 (Success)
*/
int main(void)
{
int lw = 'a';
while (lw <= 'z')
{
if (lw == 'e' || lw == 'q')
{
lw += 1;
}
else
{
putchar(lw);
lw += 1;
}
}
putchar('\n');
return (0);
}
