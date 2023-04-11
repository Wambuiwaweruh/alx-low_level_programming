#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1:first string
 * @s2:second string
 * Return:NULL on failure, else new adress
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, length_s1, length_s2, length;
	char *product;

	length_s1 = length_s2 = 0;

	if (s1 != NULL)
	{
		a = 0;
		while (s1[a++] != '\0')
			length_s1++;
	}

	if (s2 != NULL)
	{
		a = 0;
		while (s2[a++] != '\0')
			length_s2++;
	}

	length = length_s1 + length_s2;
	product = (char *)malloc(sizeof(char) * (length + 1));
	if (product == NULL)
		return (NULL);

	for (a = 0; a < length_s1; a++)
		product[a] = s1[a];
	for (b = 0; b < length_s2; b++, a++)
		product[a] = s2[b];
	product[length] = '\0';

	return (product);
}
