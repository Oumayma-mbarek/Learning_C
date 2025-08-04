#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//this program converts a string of hexadecimal numbers to its decimal value 
int puiss(int a, int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p=p*a;
    }
    return p;
}

int htoi(char *s){
    int i=0;
    int j=0;
    int n= strlen(s);
    if(*s == '0'){
        j=2;
    }
    for(int k=j;k<n;k++){
        int c;
        char s1[1]; 
        switch (tolower(*(s+k))){
            
            case 'a': 
                c=10;
                break;
            case 'b': 
                c=11;
                break;
            case 'c': 
                c=12;
                break;
            case 'd': 
                c=13;
                break;
            case 'e': 
                c=14;
                break;
            case 'f': 
                c=15;
                break;
            default: 
                s1[0]= *(s+k);
                c= strtol(s1,NULL,10);
                break;
        }
        i+= c*(puiss(16,n-k-1));
    }
    printf("%s in hexadecimal is equal to %d in decimals\n", s,i);
    return 0 ;
}

int main(){
    return htoi("0x1F");
}