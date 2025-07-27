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
int main(){
    char* str = malloc(SIZE*sizeof(char));
    char * lu= fgets(str,SIZE,stdin) ;
    //reads a line from the input file stdin
    //and copy the bytes as null terminating string to the buffer str 
    //and limit the output to the buffer to given bytes in size
    int n=0;
    int i=1;
    while(*lu != '\0'){
        n++;
        lu++;
        //si lu est remplie alors qu'on a pas fini la lecture on fait un realloc pour aggrandir le buffer
        if(n==i*SIZE){
            i++;
            lu=realloc(lu,i*SIZE);
            CHKN(lu);
            
        }
    }
    printf("the length of %s is %d\n", str, n-1);
    free(str);
    return 0;
    

}