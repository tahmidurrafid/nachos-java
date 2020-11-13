#include "syscall.h"
#include "stdio.h"
#include "stdlib.h"


int main()
{
    char s[100];
    char* argp[]= {"Rhythm"};
    argp[0] = "test_args_status";
    argp[1] = "whatever";
    argp[2] = "wtf!";    
    int i, n, j, id, *status;
    printf("Please input an integer: ");
    readline(s, 100);
    n = atoi(s);
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    id = exec("child.coff", 3, argp);
    join(id, status);
    printf("Child task has been ended\n");
    halt();
}