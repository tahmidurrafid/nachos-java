#include "syscall.h"
#include "stdio.h"
#include "stdlib.h"


int main()
{
    char s[100];
    char ch;
    int sum = 0, i = 0;
    for(i = 0; i < 10; i++){
        sum += i;
        read(0, &ch, 1);
        printf("%c", ch);        
    }
    // printf("%s", s);
    printf("The value calculated is %d\n", sum);
    halt();
    return 0;
    /* not reached */
}
