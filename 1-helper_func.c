#include "main.h"

/**
 * is_printable - Calculates the char of printables
 * @c: Char input
 *
 * Return: 1 if c is prinntable and 0 vice versa
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ASCII in hex code to buffer
 * @buffer: char array
 * @i: int index
 * @ascii_code: ASCII code
 * Return: Always 3
 */

int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= i;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i++] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit -  Checks if char is a digit
 * @c: Char input
 *
 * Return: 1 and 0 conditionally
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - casts a number to the given size
 * @num: long int value
 * @size: num showing type to be casted
 *
 * Return: casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - casts a number to its given size
 * @num: int value
 * @size: Number showing the type to be casted
 *
 * Return: casted value of num
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
