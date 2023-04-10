#include "main.h"
/**
 * _isdigit - function that check if c is a number or a letter
 * @c:char to check
 * Return:interger
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
