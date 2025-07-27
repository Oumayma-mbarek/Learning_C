#include <stdio.h>
#include <stdlib.h>

int main(){
    int a= 'A';
    int *p = &a ;
    for(int i=0;i<26;i++){
        printf("%c ",*(p)+i);
    }
    printf("\n");
    return 0;
}