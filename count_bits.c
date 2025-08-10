#include <stdio.h>

int count_bits(unsigned x){
    int b;
    for(b=0 ; x !=0 ; x>>=1){
        if(x & 01){
            b++;
        }
    }
    return b;
}

int main(){
    int b = count_bits(255);
    printf("%d\n",b);
    return 0;
}