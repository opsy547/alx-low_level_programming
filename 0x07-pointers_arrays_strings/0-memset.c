#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s : starting address of memory to be filled
 * @b: the desired value
 * @n : number of bytes to be changed
 *
 * Return: changed array with new values
 */
#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: source string
 * @b: the contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
