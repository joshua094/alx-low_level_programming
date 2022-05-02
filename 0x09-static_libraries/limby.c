#include "main.h"

int _islower(int c)
{
	return (c >= 97 && c <= 122);

}

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}

int _abs(int n)
{

return (n >= 0 ? n : n * -1);

}

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; ++x)
		;

	return (x);
}

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; ++x)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

int _atoi(char *s)
{
	int a;
	int x, y;

	x = 0;
	y = -1;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			y *= -1;

		if (s[a] > 47 && s[a] < 58)
		{
			if (x < 0)
				x = (x * 10) - (s[a] - '0');
			else
				x = (s[a] - '0') * -1;
			if (s[a + 1] < 48 || s[a + 1] > 57)
				break;
		}
	}
	if (y < 0)
		x *= -1;

	return (x);
}

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}
	return (dest);
}

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; n > x; x++)
		dest[x] = '\0';

	return (dest);
}

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0);
	return (s);
}

unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	x = 0;
	z = 0;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				z++;
				break;
			}
			y++;
		}
		if (accept[y] == '\0')
			break;
		x++;
	}
	return (z);
}

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *z;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				z = &s[x];
				return (z);
			}
			y++;
		}
		x++;
	}
	return (0);
}

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *needlestr = needle;

		while (*needlestr == *haystack && *needlestr != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			needlestr++;
		}
		if (*needlestr == '\0')
			return (start);
		haystack = start + 1;
	}
	return ('\0');
}

int _putchar(char c) {
	return 0;
}
