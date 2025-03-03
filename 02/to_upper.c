#include <stdio.h>

int main(void)
{
    while (1)
    {    
        int c;
        if ((c = getchar()) == EOF)
            return (0);
        if (97 <= c && c <= 122){
            c -= 32;
            printf("%c", c);
        }
        else{
            printf("%c", c);
        }
    }
}