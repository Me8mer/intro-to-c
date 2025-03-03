#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool whitespace = true;
    bool word = false;
    unsigned long word_count = 0;
    while (1)
    {    
        
        int c;
        if ((c = getchar()) == EOF)
            break;
        if (c == ' ' || c == '\n' || c == '\t'){
            if(word){
               whitespace = true;
               word = false; 
            }
        }
        else{
            if(whitespace){
                word_count++;
                whitespace = false;
                word = true;
            }
        }
    }
    printf("Word count: %lu\n", word_count);
    return (0);
}