/*
 * File: 6-print_line.c
 * Auth: Opeyemi Odedoyin
 */

#include "main.h"

/**
 * print_line - This will draw a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
