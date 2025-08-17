#include <stdio.h>
#include <string.h>

void reverse (char s[]){
    int c,i,j;
    for(i=0, j=strlen(s)-1;i<j;i++,j--){
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}

// transform an int to a string
void itoa (int n, char s[]){
    int signe, i;
    if((signe=n)<0){
        n=-n;
    }
    i=0;
    do{                         // read numbers backwards
        s[i++]= n%10 + '0' ;    // + '0' transofrms the int to a string int + string =  string 
                                //reads next number
    } while ((n /=10)>0) ;
    if(signe <0){
        s[i++] = '-';
    } 
    s[i] = '\0';
    reverse(s);
    
}


int main(){
    int n = 457;
    char s[5];
    itoa(n,s);
    printf("%s\n",s);
    return 0;
}