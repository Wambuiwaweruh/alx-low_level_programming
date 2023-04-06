#include "main.h"
int prime_scanner(int n, int b);
/**
 * is_prime_number - returns 1 if interger is prime otherwise 0
 * @n:interger to be evaluated
 * Return:interger
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_scanner(n, n - 1));
}
/**
 * prime_scanner - checks for prime numbers
 * @n:interger to be evaluated
 * @b:recurring interger
 * Return:interger
 */
int prime_scanner(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0 && b > 0)
		return (0);
	return (prime_scanner(n, b - 1));
}
