#include "main.h"
/**
 * _memset - has byte value for s
 * @s: adress
 * @b: char
 * @n: bytes value of s
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int value;

	for (value = 0; n > 0; value++)
	{
		s[value] = b;
		n--;
	}
	return (s);
}
