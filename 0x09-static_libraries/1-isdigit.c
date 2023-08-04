#include "main.h"

/**
 * _isdigit The C library function int isdigit(int c) checks if the passed character is a decimal digit character.
 * Decimal digits are (numbers) − 0 1 2 3 4 5 6 7 8 9
 *@c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
