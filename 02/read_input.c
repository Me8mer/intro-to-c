#include <stdio.h>

int main(void)
{
    int c;
    while (1)
    {    
        int c;
        if ((c = getchar()) == EOF)
            return (0);
        printf("%c", c);   
    }
}