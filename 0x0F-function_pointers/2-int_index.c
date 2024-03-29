#include "function_pointers.h"

/**
 * int_index - function name
 * @array:declaration of array pointer
 * @size: size of array
 * @cmp: another function
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
		}
	}

	return (-1);
}
