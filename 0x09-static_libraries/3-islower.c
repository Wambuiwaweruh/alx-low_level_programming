#include "main.h"
/**
 *  _islower - checks if  c is lowercase
 *  @c: char
 * Return: interger
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

