#include "main.h"

/**
* base10 - power in 10 base
* @n: an exponent
* Return: returns 10 to power exponent
*/

int base10(int n)
{
int base = 10;

while (n > 0)
{
base *= 10;
n--;
}
return (base);
}

/**
* print_number - prints integers enters as parameters using putchar
* @n: integer to print
* Return: void
*/

void print_number(int n)
{
int pow;

pow = base10(8);

if (n < 0)
{
_putchar('-');
n *= -1;
}

if (n == 0)
_putchar('0');

else
{
while (n / pow == 0)
pow /= 10;

while (pow >= 1)
{
_putchar((n / pow) + '0');
n %= pow;
pow /= 10;
}
}
}
