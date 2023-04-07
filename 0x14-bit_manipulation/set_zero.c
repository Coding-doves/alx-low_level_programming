#include <stdio.h>

int set_zero(unsigned int *num, unsigned int pos);

int main(void)
{
    unsigned int num;

    num = 674;
    set_zero(&num, 9);
    printf("%u\n", num);

    num = 0;
    set_zero(&num, 10);
    printf("%u\n", num);
    return (0);
}

int set_zero(unsigned int *num, unsigned int pos)
{
    unsigned int mask = ~(1 << pos);
    if (pos >= (sizeof(unsigned int) * 8))
        return (-1);

    *num &= mask;
    return (1);
}

