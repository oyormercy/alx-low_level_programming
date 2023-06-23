#include "main.h"

/**
 * print_last_digits - Prints the last digits of a number
 * @n: The number to be checked
 * Return: Value of the last digit of number
 */

int print_last_digits(int n)

{
	int last;

	last = n % 10;
	if (last < 10)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
