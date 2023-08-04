 #include "main.h"
/** 
 *_memset is a prototype function that
 *first count bytes  
 *of dest to the value c. 
 *The value of c is converted 
 *to an unsigned character
 *@s: memory area.
 *@b: constant byte.
 *@n: bytes filled.
 *Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;
	return (s);
}