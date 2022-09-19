#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
