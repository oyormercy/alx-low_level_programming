#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - Prints all nutural numbers from n to 98
 * @n - The number to start printing from
 * Return: 0 always
 */

void print_to_98(int n)

{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d" , 98);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}



