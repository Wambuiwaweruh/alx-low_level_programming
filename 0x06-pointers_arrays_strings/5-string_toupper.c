#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @r: string input
 * Return:void
 */
char *string_toupper(char *r)
{
	int i;

	i = 0;
	while (*(r + i))
	{
		if (*(r + i) >= 'a' && (r + i) <= 'z'
			* (r + i) -= 'a' - 'A';
		i++;
	}
	return (r);
}
