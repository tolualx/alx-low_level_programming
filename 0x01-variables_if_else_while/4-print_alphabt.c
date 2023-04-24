#include <stdio.h>

/**
 * main - print alphabet in lower case
 * followed by a new line, except q and e
 * Return: always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'c' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
