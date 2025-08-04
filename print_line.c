#include <stdio.h>
#include <string.h>

#define SIZE 1024 

int main(){
    char line[SIZE];
    int c;
    int len=0;
    while((c=getchar()) != EOF){
        if(c=='\n' || len>= SIZE){
            line[len]= '\0';
            printf("%s\n",line);
            len=0;
        }
        else{
            line[len]=c;
            len++;
        }
    }
    return 0;
}