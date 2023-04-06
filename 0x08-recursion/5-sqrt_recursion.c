#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
  * _sqrt_recursion -Returns the square root of a given number
  * @n: number to cal the square root
  *
  * Return: the square root
  */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - Cal square root
  * @n: number to cal the square root
  * @i: iteration number
  *
  * Return: the square root
  */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
