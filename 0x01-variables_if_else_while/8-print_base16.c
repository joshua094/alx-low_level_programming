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
	
	char j;

	for (j = 97; j <= 102; j++)
	{
		putchar (j);
	}

	putchar ('\n');

	return (0);

}
