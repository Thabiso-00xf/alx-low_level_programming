#include <stdio.h>

/**
 * main - print name of file program is compiled from
 * Return: 0 if successfull
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
