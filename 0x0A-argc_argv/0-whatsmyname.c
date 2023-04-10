#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: no of argument
 * @argv: array of  arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
