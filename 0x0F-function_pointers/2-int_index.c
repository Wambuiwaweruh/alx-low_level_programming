#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @size: no of elements in array
 * @array: array holding elements
 * @cmp: pointer to the function
 * Return: interger index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);

				j++;
			}
		}
	}

	return (-1);
}
