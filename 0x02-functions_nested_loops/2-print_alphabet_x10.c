#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet 10 times.
 *
 * This function prints the lowercase alphabet in sequential order,
 * starting from 'a' and ending with 'z'. It uses nested loops to print
 * the alphabet 10 times, followed by a new line.
 */
void print_alphabet_x10(void)
{
int i;
char letter;

for (i = 0; i < 10; i++)
{
letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}
}
