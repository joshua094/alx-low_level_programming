#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 * Return: Always (0)
 */

void _print_rev_recursion(char *s)
{
	static int i, len, temp;
	len = strlen(s);
	if (*s == '\0')
		return;
	else
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
