#include "main.h"


/** the _memset()- the first
 * @n: numbers of byte of the memory
 * @s: area pointed by s
 * @b: with the constant byte b
 * :: return (s)
 */

char *_memset(char *s , char *b, unsigned int n);
{
     memset(s ,b ,n);

     return(s);
}
