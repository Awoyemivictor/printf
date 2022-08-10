#include "main.h"
#include <unistd.h>

/**
 * _strlen - A function that returns the length of a string
 * @s: Parameter containing the string
 *
 * Return: An Integer
 */

int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}

/**
 * _putchar - prints a character to standard output
 * @c: parameter to be printed
 *
 * Return: 0 if True, On error return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string
 * @str: the string to be printed
 *
 * Return: Void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
