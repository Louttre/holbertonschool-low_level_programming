#include <stdio.h>
int clear_bit(unsigned long int *n, unsigned int index)
{
        unsigned int i = 0;;
        unsigned int j = 1;
        int m;
        int o;
        
        if (!n)
            return (-1);
        while (i < index)
        {
                j = j << 1;
                i++;
        }
        m = *n ^ j;
        o = m | j;
        
        if (o == *n)
        {
            *n = m;
        }
        return (1);
            
}
