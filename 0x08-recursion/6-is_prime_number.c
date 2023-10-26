#include "main.h"

/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @c: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime(unsigned int n, unsigned int c)
{
<<<<<<< HEAD
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
=======
  if (n % c == 0)
  {
    if (n == c)
      return (1);
    else
      return (0);
  }
  return (0 + is_prime(n, c + 1));
>>>>>>> dcaca87d3381203441684a4a55ceef95a91ec5ec
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
<<<<<<< HEAD
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
=======
  if (n == 0)
    return (0);
  if (n < 0)
    return (0);
  if (n == 1)
    return (0);
  return (is_prime(n, 2));
}
>>>>>>> dcaca87d3381203441684a4a55ceef95a91ec5ec
