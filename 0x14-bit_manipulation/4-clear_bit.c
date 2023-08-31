#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * @n:declaration of pointer of an unsigned long int.
 * @index:the indexingof the bit.
 *
 * Return:it just return 1 if it worked,negative if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;

if (index > 63)
	return (-1);

m = 1 << index;

if (*n & m)
	*n ^= m;

return (1);
}
