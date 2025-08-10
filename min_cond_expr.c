#include <stdio.h>
//returns the lowercase of c using conditional expressions

int min_cond_expr(int c){
    c = (c >= 'A' && c <= 'Z') ? c- 'A' + 'a' : c ;
    return c;
}

int main(){
    printf("%c\n",min_cond_expr('F'));
    return 0;
}