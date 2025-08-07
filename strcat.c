#include <stdio.h>
#include <stdlib.h>

void strcat(char s[], char t[]){
    int i,j;
    i=j=0;
    while(s[i] != '\0'){
        i++;
    }
    while((s[i++]=t[j++]) != '\0')
    ;
    s[i]='\0';
    return;
}

int main(){
    /*
    char *s= malloc(1024*sizeof(char));
    char *t= malloc(1024*sizeof(char));
    printf("write a first sentense ");
    scanf("%s\n",s);
    printf("write a second sentense ");
    scanf("%s\n",t );
    */
    char s[10]= "hello";
    char t[15]= "my name is";


    strcat(s,t);
    puts(s);
    return 0;
}