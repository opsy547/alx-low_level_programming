#include "main.h"
/**
 * main - Prints print_alphabet followed by a new line.
 *
 * Return: Always 0.
 */

/*print_alphabet*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
