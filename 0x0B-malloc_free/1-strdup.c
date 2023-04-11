#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that contains copy of a string
 * as a given parameter
 * @str:string
 * Return:NULL if str = NULL, a pointer to duplicated string on success
 */
char *_strdup(char *str)
{
	char *duplicate;
	int a, length;

	length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	duplicate = malloc((sizeof(char) * length) + 1);
	if (duplicate == NULL)
		return (NULL);

	for (a = 0; a < length; a++)
		duplicate[a] = str[a];
	duplicate[length] = '\0';

	return (duplicate);
}
