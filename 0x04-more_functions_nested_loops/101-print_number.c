#include "main.h"
#include <stdio.h>
/**
* print_number - program that prints an integer.
* @n: The integer to print.
* Return: zero
*/
void print_number(int n)
{
unsigned int a = n;
if (n < 0)
{
n *= -1;
a = n;
_putchar('-');
}
a /= 10;
if (a != 0)
print_number(a);
_putchar((unsigned int) n % 10 + '0');
}
