#include <stdio.h>
/**
* Description: main program that prints all single digit of numbers
* of base 10 starting from 0,
* You are not allowed to use any variable of type char
* You can only use the putchar function
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
putchar ("\n");
return (0);
}
