#include <string.h>
// delete spaces, tabs and end of lines from the end of a string
// and returns the length of the string afterwards
int trim(char s[]){
    int  n;
    for(n=strlen(s)-1;n>=0;n--){
        if(s[n] != ' ' && s[n] != '\t' && s[n] != '\n'){
            break;
        }
    }
    s[n+1]='\0';
    return n;
}