#include <stdio.h>
#include <string.h>
//returns the position of the outmost right occurence of t in s, else -1
int chposd(char s[], char t[]){
    int i,j,k;
    for(i=strlen(s)-1;i>=0;i--){
        for(j=i,k=strlen(t)-1;k >= 0 && s[j]==t[k];j-- ,k--){
        ;
        }
        if(k==-1 ){
            return j+1;
        }
    }
    return -1;
}

int main(){
    char s[]= "nous vous";
    char t[]= "ous";
    printf("%d\n",chposd(s,t));
    return 0;
}

// this program doesn't treat the case where s is shorter than t