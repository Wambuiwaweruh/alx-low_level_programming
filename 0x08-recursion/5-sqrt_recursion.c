#include "main.h"
int sqrt_scanner(int n, int b);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * sqrt_scanner - sqaure root
 * @n:interger
 * Return:interger
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_scanner(n, 0));
}

/**
 * sqrt_scanner - square root
 * @n:interger
 * @b:checks number of times squareroot is repeated
 * Return:interger
 */
int sqrt_scanner(int n, int b)
{
	if (b * b > n)
		return (-1);
	if (b * b == n)
		return (b);
	return (sqrt_scanner(n, b + 1));
}
