#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function name
 * @b:declared variable
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int i)
{
	void *point;

	point = malloc(i);

	if (point == NULL)
	{
		exit(98);
	}

	return (point);
}
