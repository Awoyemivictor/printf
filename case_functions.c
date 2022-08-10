#include "main.h"

/**
 * print_string - Function that print string
 * @list: Variable list
 * @count: Parameter that count
 *
 * Return: integer
 */

int print_string(va_list list, int count)
{
	char *aux = va_arg(list, char *);

	if (aux == NULL)
	{
		aux = "(null)";
		_puts(aux);
		count += _strlen(aux);
		return (count);
	}

	_puts(aux);
	count += _strlen(aux);
	return (count);
}

/**
 * print_sign - Function that prints sign
 * @list: Variable list
 * @count: Parameter that count
 *
 * Return: integer
 */

int print_sign(va_list list, int count)
{
	int aux = va_arg(list, int);
	char *str;

	if (aux < 0)
	{
		_putchar('-');
		aux = -(aux);
		count += 1;
	}

	str = convert_to("0123456789abcdef", aux, 10);
	_puts(str);
	count += _strlen(str);
return (count);
}

/**
  * print_binary - Function that prints binary of numnbers
  * @list: Variable list
  * @count: Parameter that count
  *
  * Return: integer
  */

int print_binary(va_list list, int count)
{
	int aux = va_arg(list, int);
	char *str;

	if (aux == INT_MAX || aux == INT_MIN)
		return (0);

	str = convert_to("0123456789abcdef", aux, 2);
	_puts(str);
	count += _strlen(str);

	return (count);
}

/**
 * convert_to - Function that prints and convert numbers
 * @representation: An array of integers
 * @num: The integer value
 * @base: The base to be used
 *
 * Return: char
 */

char *convert_to(char representation[], unsigned int num, int base)
{
	int mod;
	static char buffer[120];
	char *ptr;

	ptr = &buffer[127];
	*ptr = '\0';

	do {
		mod = num % base;
		*--ptr = representation[mod];
		num /= base;
	} while (num != 0);

	return (ptr);
}
