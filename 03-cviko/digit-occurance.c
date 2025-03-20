#include <stdio.h>
#include <stdbool.h>

int for_cycle_for_digit_count(char c){
    if (c >= '0' && c <= '9')
        return (c - '0');
    return (-1);
}

int main(void)
{
    int digit_count[10] = {0,0,0,0,0,0,0,0,0,0};
    int c;
    while (1)
    {         
        if ((c = getchar()) == EOF)
            break; 
        int i;
        if ((i = for_cycle_for_digit_count(c)) != -1){
            digit_count[i] += 1;
        }
    }
    c = 0;
    while (c < 10)
    {
        printf("%d: %d\n", c, digit_count[c]);
        c++;
    }

    return (0);
}
