#include <stdio.h>
#include <ctype.h>

int to_lower(int c){
    if(c>='A' && c<='Z'){
        return c-'A'+'a';
    }
    else {
        return c;
    }
}

int main(){
    printf("%c\n",to_lower('F'));
    return 0;
}