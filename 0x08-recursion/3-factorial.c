#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n:interger to be factored
 * Return:interger
 */
int factorial(int n)
{
	unsigned int b;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		b = n * factorial(n - 1);
	}
	return (b);
}
