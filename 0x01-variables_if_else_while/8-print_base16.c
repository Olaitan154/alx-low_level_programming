#include <stdio.h>
/**
* Description: main - program that prints all the numbers of
* base 16 in lowercase
* You can only use the putchar function
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 48;
int l = 'a';
while (n <= 57)
{
putchar (n);
n += 1;
}
while (l <= 'f')
{
putchar (l);
l++;
}
putchar ('\n');
return (0);
}
