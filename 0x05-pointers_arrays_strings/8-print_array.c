#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements in the array a
 * @a: array to print
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int inc;

	int inc;
	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10);
}
