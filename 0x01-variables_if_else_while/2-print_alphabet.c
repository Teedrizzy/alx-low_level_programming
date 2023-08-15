#include <stdio.h>

/**
 * main - prints alpha in lower case
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
