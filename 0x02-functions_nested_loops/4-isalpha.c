#include "main.h"

/**
 * _isalpha - checks if c is a letter
 * @c: is the char to be checked
 * Return: 1 if c is a letter, otherwise return 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c >= 'a' && c <= 'Z' && c <= 'z')
		return (1);
	else
		return (0);
}
