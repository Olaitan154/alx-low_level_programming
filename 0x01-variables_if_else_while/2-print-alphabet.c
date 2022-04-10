#include <stdio.h>
#include <ctype.h>
/**
* Description: main - program that prints the alphabet in lowecase,
* followed by a new line
* You can only use the putchar
* Return: Always 0 (Success)
*/
int main(void)
{
int l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar('\n');
return (0);
}
