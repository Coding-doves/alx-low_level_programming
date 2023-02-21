#include "main.h"

/**
 * jack_bauer - prints 24hours
 * Return: time
 */
void jack_bauer(void)
{
int d, h, m, s;

for (d = 0; d <= 2; d++)
{
for (h = 0; h <= 9; h++)
{
if ((d <= 1 && h <= 9) || (d <= 2 && h <= 3))
{
for (m = 0; m <= 5; m++)
{
for (s = 0; s <= 9; s++)
{
_putchar(d + '0');
_putchar(h + '0');
_putchar(58);
_putchar(m + '0');
_putchar(s + '0');
_putchar('\n');
}
}
}
}
}
}
