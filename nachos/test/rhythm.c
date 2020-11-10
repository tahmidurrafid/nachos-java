#include "syscall.h"
#include "stdio.h"
#include "stdlib.h"


int main()
{
    char s[100];
    char ch;
    int sum = 0, i = 0;
    char **args;
    for(i = 0; i < 10; i++){
        sum += i;
        // read(0, &ch, 1);
        // printf("%c", ch);        
    }
    // printf("%s", s);
    printf("The value calculated is %d\n", sum);
    exec("child.coff", 0, args);
    for(i = 0; i < 1000000; i++){
        sum += i;
    }
    printf("ekhon jhamela hoar kotha na %d\n", sum);
    halt();
    // return 0;
    /* not reached */
}
