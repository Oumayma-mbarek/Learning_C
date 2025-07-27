#include <stdio.h>
#include <string.h>

#define SIZE 1024 

// this program reverses the input line by line 

int inverser(char s[], int len){
    char inverse[len];
    for (int i=0;i<=len;i++){
        inverse[len-i-1]= s[i];
    }
    inverse[len]='\0';
    printf("%s\n",inverse);
    return 0;
}

int main(){
    char line[SIZE];
    int c;
    int len=0;
    while((c=getchar()) != EOF){
        if(c=='\n' || len>= SIZE){
            line[len]= '\0';
            inverser(line,len);
            len=0;
        }
        else{
            line[len]=c;
            len++;
        }
    }
    return 0;
}