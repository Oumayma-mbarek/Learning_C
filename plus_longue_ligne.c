#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024


int length(char s[],int lim){
    //reads a line in s and returns ints length 
    int c,i;
    for(i=0;i<lim-1 && (c=getchar()) != EOF && (c=getchar()) != '\n';i++){ // i is incremented in the for loop 
        s[i]=c;
    }
    if(c=='\n'){
        s[i]=c;
        i++;
    }
    s[i]='\0';
    return i;
}

void copy(char ch1[], char ch2[]){
    int i=0;
    while((ch1[i]= ch2[i]) != '\0'){
        ++i;
    }
    return;
}

int main(){
    int max=0; // maximum length 
    int l; //length of the current line 
    char longest_line[SIZE]; //the longest line is stocked here
    char line[SIZE]; // current input line
    while((l=length(line,SIZE))>0){
        if(l > max){
            max = l;
            copy(line,longest_line);
        }
    }
    if(max>0){
        printf("%s",longest_line);
    }
    return 0;
}