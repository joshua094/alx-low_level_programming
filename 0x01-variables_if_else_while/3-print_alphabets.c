#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lcase;
	char ucase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	for (ucase = 'A'; ucase <= 'Z'; ucase++)
	{
		putchar(ucase);
	}

	putchar('\n');

	return (0);
}
