#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: Alwys 0 success
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i =1; i  <= size; i++)
	{
		for (int j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for ( k = 1; k <= size; k++)
		{
			_putchar('#');
		}
	}

	_putchar('\n')
	
		return (0);
}
