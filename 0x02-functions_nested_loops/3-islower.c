#include "main.h"

/**
 * main - checks for lowercase characters.
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
