#include "main.h"
/**
 * print_line - prints a _ given numbers
 * @n: number of lines _ will be printed
 * Return : Always 0 (Success)
 */
void print_line(int n)
{
	int c = 0;

	while (n > c)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
