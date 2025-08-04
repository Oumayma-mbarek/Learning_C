#include <stdio.h>
#include <ctype.h>

int atoi(char s[]){
    int i;
    int n=0;
    for(i=0;isdigit(s[i]);i++ ){
        n= n*10 +(s[i]-'0');
    }
    return n; 
}

int main(){
    printf("%d\n", atoi("4573"));
    return 0;
}