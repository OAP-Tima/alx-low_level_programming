#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, and then a new line.
 * Return: Always 0;
 */
int main(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	return (void);
}
