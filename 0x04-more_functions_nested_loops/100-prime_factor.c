#include <stdio.h>
#include <math.h>
/**
 * main - Finds and prints largest prime number
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num = 612852475143;
	int prime;

	for (prime = 2; prime <= sqrt(num); prime++)
	{
		if (num % prime == 0)
		{
			num = num / prime;
			prime = 1;
		}
	}
	printf("%ld\n", num);
	return (0);
}
