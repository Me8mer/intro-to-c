#include <stdio.h>
#include <poll.h>

int
main(void)
{
    int i = 1;
    int index = 1;
    while (i <= 50){ 
        printf("|" );
        int a = 0;
        while (a < i){
            printf(" ");
            a++;
        }
        if (a == i && i < 50){ //can put into 2 ifs if && is not allowed
            printf("*");
            a++;
        }
        while (a < 50){
            printf(" ");
            a++;
        }
        printf("|");
        printf("\r");
        fflush(stdout);

        i = i + index;
        if (i == 49){
            index = -1;
        }
        if (i == 0){
            index = 1;
        }
        poll(NULL, 0, 50);
    }
}