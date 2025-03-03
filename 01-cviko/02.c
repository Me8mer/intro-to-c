#include <stdio.h>

main(void)
{
    int i = 1;
    while (i <= 9)
    {
        int X = 1 * i;
        int Y =  2.54 * i;
        float Yf = 2.54 * i;
        printf("\t%d\t%d\t%.2f\n", X, Y, Yf);
        i++;
    }
    
}
