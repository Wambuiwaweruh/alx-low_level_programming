#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat -  function that concatenates two strings
 * @s1:first string
 * @s2:second string
 * Return: Null on failure, else return new address
 */
char *str_concat(char *s1, char *s2)
{
	int a_s1, b_s2, length_s1, length_s2, length;
	char *product;

	length_s1 = 0;
	length_s2 = 0;

	if (s1 != NULL)
	{
		a_s1 = 0;
		while (s1[a_s1++] != '\0')
			length_s1++;
	}

	if (s2 != NULL)
	{
		a_s1 = 0;
		while (s2[a_s1++] != '\0')
			length_s2++;
	}

	length = length_s1 + length_s2;
	product = malloc(sizeof(char) * (length + 1));
	if (product == NULL)
		return (NULL);

	for (a_s1 = 0; a_s1 < length_s1; a_s1++)
		product[a_s1] = s1[a_s1];
	for (b_s2 = 0; b_s2 < length_s2; b_s2++)
		product[a_s1] = s2[b_s2];
	product[length] = '\0';

	return (product);
}
