#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum of the two
 */

int op_add(int a, int b)
{
	return (a+b);
}

/**
 * op_sub - function that subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: the difference of the two
 */
int op_sub(int a, int b)
{
	return (a-b);
}

/**
 * op_mul - function that  multiplies two numbers 
 * @a: first number
 * @b: second number
 * Return: the product of 2 numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder after division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  function to give the modulus of two numbers
 * @a: first number
 * @b: second number
 * Return: the modulus after division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
