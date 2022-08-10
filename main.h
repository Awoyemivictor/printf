#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>

int _printf(const char *format, ...);
int string_loop(va_list list, const char *string);
int switch_func(va_list list, char aux, int count);
int print_character(va_list list, int count);
int print_string(va_list list, int count);
int _strlen(char *s);
int _putchar(char c);
void _puts(char *str);
int print_string(va_list list, int count);
int print_sign(va_list, int count);
int print_binary(va_list list, int cont);
char *convert_to(char representation[], unsigned int num, int base);

#endif
