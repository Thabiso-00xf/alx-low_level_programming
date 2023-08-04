#include "main.h"

/**
 * *_strcat function commute srtings
 * The strcat() function concatenates string2 to string1 and ends the resulting string with the null character.
 * The strcat() function operates on null-ended string
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int x;

	i = 0;
	x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[x] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
