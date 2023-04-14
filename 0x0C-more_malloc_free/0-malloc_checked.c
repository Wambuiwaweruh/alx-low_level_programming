#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b:number of bytes to be allocated
 * Return:a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = (void *)malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
