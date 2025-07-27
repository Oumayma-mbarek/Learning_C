#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1024

int main(){
    char *s;
    s= malloc(SIZE*sizeof(char));
    char *str= fgets(s,SIZE,stdin);
    if(str==NULL){
        exit(1);
    }
    int n;
    n= strlen(str);
    for(int i=n;i>-1;i--){
        printf("%c",*(str+i));
    }
    printf("\n");
    return 0;
}