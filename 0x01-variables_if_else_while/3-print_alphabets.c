#include <stdio.h>

/**
 * main - Print alphabets in lowercase then in upper case from 'a' to 'z'.
 *
 * Return: always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar (letter);

	putchar('\n');

	return (0);
}
