#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i <= 127){
        if (isprint(i)){
            printf("%02x %c", i, i);
        }
        if (!isprint(i)){
            printf("%02x NP", i);
        }
        printf("\t");
        if (((i+1) % 8) == 0){
            printf("\n");
        }
        i++;
    }
}