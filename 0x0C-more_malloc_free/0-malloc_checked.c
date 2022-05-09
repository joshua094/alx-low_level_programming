#include <stdio.h>
#include <stdlib.h>

/**
 * main - check if code correctly allocates malloc
 *  @b: number of bits to use
 * Return: pointer to the address or 98 otherwise
 */

void *malloc_checked(unsigned int b);
{
    void *ptr = malloc(b);

    if (ptr == NULL)
        exit (98);
    else
        return (ptr);
}
