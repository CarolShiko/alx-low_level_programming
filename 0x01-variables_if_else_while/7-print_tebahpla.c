#include <stdio.h>

/**
 * main - print in lowercasealphabets in reverse mode.
 *
 * Return: always 0.
 */
int main(void)
{ 
	char letter;

	for (letter = 'z'; letter <= 'a'; letter++)
		putchar (letter);

	putchar('\n');

	return (0);
}
