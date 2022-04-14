#include "main.h"
/**
 * print_diagonal - prints \ n times
 * @n: Number that will determine how \ will be printed
 * Return: Always 0;
 */
void print_diagonal(int n)
{
	int c, i;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (i = 0; i < c; i++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
