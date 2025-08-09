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

    char *s;
    s= malloc(1024*sizeof(char));
    s = fgets(s,1024, stdin);
    if( s ==NULL){
        exit(1);
    }
    int i=0;
    while(*(s+i) != '\0'){
        if(*(s+i) == '\n'){
            *(s+i) = ' ';
        }
        i++;
    }

    char *t;
    t= malloc(1024*sizeof(char));
    t = fgets(t,1024, stdin);
    if( t ==NULL){
        exit(1);
    }
    int j=0;
    while(*(t+j) != '\0'){
        if(*(t+i) == '\n'){
            *(t+i) = ' ';
        }
        j++;
    }

    strcat(s,t);
    puts(s);
    return 0;
}