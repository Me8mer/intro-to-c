#include <stdio.h>

int main(void)
{
    while (1)
    {    
        int c;
        if ((c = getchar()) == EOF)
            return (0);
        printf("%c", c);   
    }
}