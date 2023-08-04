#include "main.h"
/**
 * _memcpy - copiesaracters from memory area src to,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n:return parameter bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(dest + j) =  *(src + j);

	return (dest);
}
