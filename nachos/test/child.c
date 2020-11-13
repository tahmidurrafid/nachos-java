#include "syscall.h"

int main(int argc, char** argv)
{
    int i;
    printf("I am a child process\n");
    for(i = 0; i < argc; i++){
        printf("arg %d : %s\n", i, argv[i] );
    }
    /* not reached */
}
