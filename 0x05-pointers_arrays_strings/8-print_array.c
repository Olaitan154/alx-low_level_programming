#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints the elements of an array
* @a: array to print
* @n: number of elements in the array
* Return: nothing.
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == (n - 1))
printf("%d", *(a + i));
else
printf("%d, ", *(a + i));
}
printf("\n");
}
