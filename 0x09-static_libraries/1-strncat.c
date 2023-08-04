#include "main.h"
/**
 * _strncat - concatenates string2 to string1 and ends the,
 * @dest: destination
 * @The strcat()function operates on null-ended strings. 
 * @src: source.
 * @n: amount of bytes used from src.
 * Itreturns a pointer to str where the resulting concatenated string resides.
 */
char *_strncat(char *dest, char *src, int n)
{
	int tally = 0, tally2 = 0;

	while (*(dest + tally) != '\0')
	{
		tally++;
	}

	while (tally2 < n)
	{
		*(dest + tally) = *(src + tally2);
		if (*(src + tally2) == '\0')
			break;
		tally++;
		tally2++;
	}
	return (dest);
}

