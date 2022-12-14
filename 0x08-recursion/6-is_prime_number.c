#include "main.h"
/**
 * is_prime - prints 1 if the input integer is a prime number, otherwise 0
 * @n: input number
 * @c: iterator
 * Return: returns is_prime
 */

int is_prime(unsigned int n, unsigned int c)
{
if (n % c == 0)
{
if (n == c)
return (1);
else
return (0);
}
return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - detects if an input is a prime number
 * @n: input number
 * Return: returns 1 if n is prime number otherwise 0
 */

int is_prime_number(int n)
{
if (n < 0)
return (0);
if (n == 0)
return (0);
if (n == 1)
return (0);
return (is_prime(n, 2));
}
