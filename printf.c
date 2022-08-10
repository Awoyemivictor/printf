#include "main.h"

/**
 * _printf - Function that produces output according to a format.
 * @format: Parameters that contains a string
 *
 * Returns: The number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list myNumber;
	int count;

	if (format == NULL)
			return (-1);

	va_start(myNumber, format);
	count = string_loop(myNumber, format);
	va_end(myNumber);

	return (count);
}

/**
 * string_loop - Function to iterate through the loop
 * @list: variadic list
 * @string: Variable holding whatever is in format
 *
 * Return: integer
 */


int string_loop(va_list list, const char *string)
{
	int i = 0, count = 0;
	char new;

	while (string[i] != '\0' && i < _strlen((char *)string))
	{
		new = string[i];
		if (new == '%')
		{
			i++;
			new = string[i];

			if (new == '\0')
					return (-1);

			count = switch_func(list, new, count);

			if (count == 0)
			{
				_putchar('%');
				_putchar(new);
				count += 2;
			}
		}
		else
		{
			_putchar(new);
			count++;
		}
		i++;
	}

	return (count);
}

/**
 * switch_func - Function that determins the format specifier
 * @list: Variadic list
 * @aux: The comment character that was passed to the function
 * @count: The current length of the string
 *
 * Return: integer
 */


int switch_func(va_list list, char aux, int count)
{
	switch (aux)
	{
		case 'c':
		{
				count = print_character(list, count);
				break;
		}
		case 's':
		{
				count = print_string(list, count);
				break;
		}
		case 'd':
		case 'i':
		{
				count = print_sign(list, count);
				break;
		}
		case 'b':
		{
			count = print_binary(list, count);
			break;
		}
		default:
			return (0);
	}
return (count);
}

/**
 * print_character - Function that prints a character
 * @list: Variable list
 * @count: Parameter count
 *
 * Return: integer
 */

int print_character(va_list list, int count)
{
	char aux = va_arg(list, int);

	_putchar(aux);
	count++;
	return (count);
}





























 
