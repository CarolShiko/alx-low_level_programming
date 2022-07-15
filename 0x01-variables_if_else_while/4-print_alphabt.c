#include <stdio.h>

/**
 * main print alphabets - Print alphabets except e and q'
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{ 
		if (letter != 'e' && letter != 'z')
			putchar (letter);
	}

	putchar('\n');

	return (0);
}
