#include <stdio.h>
/**
* Description: main - program that prints all single digit numbers
* of base 10 starting from
* You are not allowed to use any variable of type char
* You can only use the putchar
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 48;
while (n <= 57)
{
putchar (n);
n += 1;
}
printf("\n");
return (0);
}
