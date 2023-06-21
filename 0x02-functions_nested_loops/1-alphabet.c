#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * This function prints the lowercase alphabet in sequential order,
 * starting from 'a' and ending with 'z'. It uses the _putchar function
 * to print each character, and adds a new line at the end.
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}
