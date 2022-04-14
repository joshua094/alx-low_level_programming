#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: Alwys 0 success
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i =1; i  <= size; i++)
	{
		for (int j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for ( k = 1; k <= i; k++)
		{
			_putchar('#');
		}
	}

	_putchar('\n');
	
		return (0);
}
