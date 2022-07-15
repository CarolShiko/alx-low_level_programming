#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * return: always 0.
 */
int main(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);

	putchar ('\n');

	return (0);
}
