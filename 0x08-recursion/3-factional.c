#include "holberton.h"

/**
<<<<<<< HEAD
* factional - returns the factional of a given number.
*
* @: input number
*
* Return: int
*/
=======
 * factorial - returns the factorial of a given number.
 *
 * @n: input number
 *
 * Return: int
 */
>>>>>>> c5233a1d53267c61f3f256cb99e79b660ea663c2

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
