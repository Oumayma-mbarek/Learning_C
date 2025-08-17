#include <stdio.h>
#include <string.h>
//reverses a string inside of itself
void reverse (char s[]){
    int c,i,j;
    for(i=0, j=strlen(s)-1;i<j;i++,j--){
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}

int main(){
    char s[] = "hello";
    reverse(s);  // modify s in place
    printf("%s\n", s);  // print the reversed string
    return 0;
}