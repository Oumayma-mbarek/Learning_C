#include <stdio.h>
#include <string.h>

#define MAXLINE 1024 //maximum length of a line
int readline(char line[], int max);
int chpos(char source [], char search[]);

char model[] = "ous"; // model to look for

int main(){ // find all lines containing the model 
    char line[MAXLINE];
    int found =0;
    while(readline(line, MAXLINE)>0){
        if(chpos(line,model) >=0 ){
            printf("%s\n", line);
            found ++;
        }
    }
    return found;
}

//reads a line and puts it in s, returns its length
int readline(char s [], int lim ){
    int c;
    int i=0;
    while(--lim >0 && (c=getchar()) != EOF && c != '\n'){
        s[i++]=c;
    }
    if(c=='\n'){
        s[i++]=c;
    }
    s[i]='\0';
    return i;
}

//returns the position of t in s, -1 otherwise
int chpos(char s[], char t[]){
    int i,j,k;
    for(i=0;s[i]!='\0';i++){
        for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++ ,k++){
            ;
        }
        if(k>0 && t[k]=='\0'){
            return i;
        }
    }
    return -1;
}
