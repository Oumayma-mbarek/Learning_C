#include <stdio.h>
//a faster way to count the number of bits set to one 
//    In two’s complement, x &= (x - 1) clears the rightmost 1 bit of x.
//That way, instead of looping over every bit, you only loop as many times as there are 1s in x

int count_bits(unsigned x){
    int b=0;
    while (x != 0) {
        x &= (x - 1); // clears the rightmost 1-bit
        b++;
    }
    return b;
}

int main(){
    int b = count_bits(255);
    printf("%d\n",b);
    return 0;
}