#include <stdio.h>
#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
        unsigned int i = 0;
        int j = 1;

        if (!n)
                return (-1);
        while (i < index)
        {
                j = j << 1;
                i++;
        }
        *n = *n | j;
        return (1);
}
