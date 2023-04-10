#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum no of coins to  Give change
 * @argc: no of  arguments passed
 * @argv: arguments
 * Return: interger
 */
int main(int argc, char *argv[])
{
	int amount, arg, change;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	change = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (arg = 0; arg < 5 && amount >= 0; arg++)
	{
		while (amount >= cents[arg])
		{
			change++;
			amount -= cents[arg];
		}
	}

	printf("%d\n", change);
	return (0);
}
