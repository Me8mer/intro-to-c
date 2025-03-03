#include <stdio.h>

int main(void)
{
    int i0,i1,i2,i3,i4,i5,i6,i7,i8,i9 = 0;
    int c;
    while (1)
    {    
        
        if ((c = getchar()) == EOF)
            break; 
        if (c == '0')
            i0++;
        if (c == '1')
            i1++;
        if (c == '2')
            i2++;
        if (c == '3')
            i3++;
        if (c == '4')
            i4++;
        if (c == '5')
            i5++;
        if (c == '6')
            i6++;
        if (c == '7')
            i7++;
        if (c == '8')
            i8++;
        if (c == '9')
            i9++;   
    }
    printf("0: %d\n", i0);
    printf("1: %d\n", i1);
    printf("2: %d\n", i2);
    printf("3: %d\n", i3);
    printf("4: %d\n", i4);
    printf("5: %d\n", i5);
    printf("6: %d\n", i6);
    printf("7: %d\n", i7);
    printf("8: %d\n", i8);
    printf("9: %d\n", i9);
    return (0);
}
