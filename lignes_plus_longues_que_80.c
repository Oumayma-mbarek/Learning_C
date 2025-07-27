#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 1000
#define SIZE 1024

// this program reads input and prints the lines that are longer than 80 in the stdout

int main(){
    int len=0;
    char line[SIZE];
    int c;
    while((c=getchar()) != EOF ){
        if(c== '\n' || len >= SIZE){
            line[len]= '\0';
            if(len>80){
                printf("%s\n",line);
            }
            len=0;
        }
        else {
            line[len]=c;
            len++;
        }
    }
    // Handle the last line if there's no newline at EOF
    if (len > 0) {
        line[len] = '\0';
        if (len > 80) {
            printf("%s\n", line);
        }
    }
    return 0;
}

