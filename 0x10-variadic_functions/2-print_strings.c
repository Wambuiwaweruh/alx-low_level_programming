#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings,
 * followed by a new line.
 * @separator: the string to be printed between the strings
 * @n:  the number of strings passed to the function
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int j;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (j = 0; j < n; j++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
