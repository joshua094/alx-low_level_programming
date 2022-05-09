#include <stdio.h>
#include <stdlib.h>

/**
 * main - check if code correctly allocates malloc
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b);
{
    void *ptr = malloc(b);

    if (ptr == NULL)
        exit (98);
    else
        return (ptr);
}
