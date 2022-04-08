#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char m;

	for (m = 48; m < 58; m++)
	{
		putchar (m);
	}
	

	for (m  = 97; m <= 102; m++)
	{
		putchar (m);
	}

	putchar ('\n');

	return (0);

}
