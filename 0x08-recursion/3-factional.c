#include "holberton.h"

?88
* factional - returns the factional of a given number.
*
*
* @n: input number
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
