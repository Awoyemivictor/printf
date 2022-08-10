#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: 0 - SUCCESS
 */

int main(void)
{
	int len, len2;

	len = _printf("%d\n", INT_MAX);
	len2 = printf("%d\n", INT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	len = _printf("%d\n", INT_MIN);
	len2 = printf("%d\n", INT_MIN);
	_printf("b4 flush %d\n", len);
        printf("b4 flush %d\n", len2);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}


	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Length: [%d, %i]\n", len, len2);
	printf("Length: [%d, %i]\n", len, len2);

	len = _printf("%!\n");
	len2 = printf("%!\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	len = _printf("%");
	len2 = printf("%");

	_printf("b4 flush %d\n", len);
        printf("b4 flush %d\n", len2);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	len = _printf("Negative: [%d]\n", -762534);
	len2 = printf("Negative: [%d]\n", -762534);

	_printf("Negative Length: [%d]\n", len);
	printf("Negative Length: [%d]\n", len2);

	_printf("Character: [%c]\n", 'H');
	printf("Character: [%c]\n", 'H');
	len = _printf("String: [%s]\n", "I am a string !");
	len2 = printf("String: [%s]\n", "I am a string !");

	_printf("String Length: [%d]\n", len);
	printf("String Length: [%i]\n", len2);
	len = _printf("Percent:[%d]\n", 103265);
	len2 = printf("Percent:[%d]\n", 103265);
	_printf("Len:[%d]\n", len);
	 printf("Len:[%d]\n", len2);
	_printf("Unknown: [%r]\n");
	printf("Unknown: [%r]\n");
	_printf("Unknown: [%200]\n");
	printf("Unknown: [%200]\n");
	return (0);
}
