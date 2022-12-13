#include "main.h"
/**
 * main - Prints "Alphabets in small letters" followed by a new line.
 *
 * Return: Always 0.
 */

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
