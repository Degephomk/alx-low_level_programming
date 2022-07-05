#include "main.h"

/**
 * print_last_digit - prints last digit of integer input
 * @n: integer to modify
 *
 * Return: l
 */


int print_last_digit(int n)
{
	int a, r;

	r = a % 10;
	if (r <  0)
		r= -r;
      a  = '0' + r;
	_putchar(a);
	return (r);
}
