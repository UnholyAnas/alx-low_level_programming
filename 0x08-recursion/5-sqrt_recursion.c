#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
 */
int power_operation(int n, int c)
{
<<<<<<< HEAD
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
=======
  if (c % (n / c) == 0)
  {
    if (c * (n / c) == n)
      return (c);
    else
      return (-1);
  }
  return (0 + power_operation(n, c + 1));
>>>>>>> dcaca87d3381203441684a4a55ceef95a91ec5ec
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
<<<<<<< HEAD
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
=======
  if (n < 0)
    return (-1);
  if (n == 0)
    return (0);
  if (n == 1)
    return (1);
  return (power_operation(n, 2));
}
>>>>>>> dcaca87d3381203441684a4a55ceef95a91ec5ec
