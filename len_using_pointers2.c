#include <stdio.h>

// program that count the number of characters 
// note that \n \t are also considered characters of length 1 

int main(){
    long len =0 ;
    while(getchar() != EOF){
        len ++;
    }
    printf("input length is: %ld\n", len);
    return 0;
}