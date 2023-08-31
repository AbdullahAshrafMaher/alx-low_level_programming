#include "main.h"

/**
 * is_prime_number - returns true if the number is prime
 * @n: the number to check
 * Return: true if the number is prime
*/

int is_prime_number(int n)
{
	int check = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, check));
}

/**
 * is_prime - returns the 1 if n is prime
 * @n: number to be checked
 * @check: number to start checking from
 * Return: 1 if n is prime, 0 otherwise
*/

int is_prime(int n, int check)
{
	if (check <= 1)
		return (1);
	else if (n % check == 0)
		return (0);
	return (is_prime(n, check - 1));
}
