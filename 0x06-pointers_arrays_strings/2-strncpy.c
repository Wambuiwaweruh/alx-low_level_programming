#include "main.h"

/**
 *_strncpy - function that copies a string
 *
 * @src: string input
 * @dest: string input
 * @n: input value
 * Return:void
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}

