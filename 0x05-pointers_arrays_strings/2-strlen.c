#include "main.h"

/**
 * _strlen -function that returns the length of a string
 * @s: String pointer
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;
	/ increment up to when the last character is NULL, \ 0 /
		while (*s != '\0')
		{
			len++;
			s++;
		}
	return (len);
}
