#include "unistd.h"

/**
 * putchar is a function in the C programming language 
 * that writes a single character 
 * to the standard output stream, stdout
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1))
}		
