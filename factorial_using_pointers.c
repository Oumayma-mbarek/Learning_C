#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>

#define SIZE 1024

#define CHKN(op)                                                               \
    do                                                                         \
    {                                                                          \
        if ((op) == NULL)                                                      \
            raler(#op);                                                        \
    } while (0)
noreturn void raler(const char *msg)
{
    perror(msg);
    exit(1);
}
int main(int argc, char* argv[]){
    if(argc!=2){
        raler("choose an int");
    }
    int n= atoi(argv[1]);
    int pointeur=1;
    int *p = &pointeur;

    for(int i=1;i<=n;i++){
        *p = *p *i;
    }
    printf("the factorial of %d, is %d\n",n,*p);
    return 0;
}