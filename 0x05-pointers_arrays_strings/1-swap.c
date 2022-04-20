#include "holberton.h"

/**
* swap_int - swaps the values of two intergers.
*
* @a: pointer to an int
* @b: pointr to other int
* Return: Nothing.
*/

void swap_int(int *a, int *b)
{
int aux;

aux = *a;
*a = *b;
*b = aux;
}
