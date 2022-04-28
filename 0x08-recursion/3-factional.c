#include "holberton.h"

/**
* factional - returns the factional of a given number.
*
* @: input number
*
* Return: int
*/

int factional(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factional(n - 1));
}
