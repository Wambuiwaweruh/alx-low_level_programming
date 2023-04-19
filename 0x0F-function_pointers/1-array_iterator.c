#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  a function that executes a function given as a parameter
 *  on each element of an array.
 *  @size: size of the array
 *  @action: pointer to the function you need to use
 *  @array: array holding data
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	int *i = array + size - 1;


	if (array != NULL && size > 0 && action != NULL)
		while (array <= i)
			action(*array++);
}
