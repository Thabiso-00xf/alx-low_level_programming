#include "main.h"
/**
 * _strstr - .
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Returns a pointer to the first occurrence of str2 in str1
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *my_haystack;
	char *ptrneedle;

	while (*haystack != '\0')
	{
		my_haystack = haystack;
		ptrneedle = needle;

		while (*haystack != '\0' && *ptrneedle != '\0' && *haystack == *ptrneedle)
		{
			haystack++;
			ptrneedle++;
		}
		if (!*ptrneedle)
			return (my_haystack);
		haystack = my_haystack + 1;
	}
	return (0);
}
