#include <stdio.h>

//reads n bits starting at position p
//x>>p+1-n shifts the selected bits at the far right 
// ~0 is a word with only ones 
// ~0<<n shifts n bits to the left, so the n bits in the right are all set to 0 
//~(~0 << n) is a word with the last n bits set to 1 and the rest to 0 

int lirebits(int x,int p, int n){
    return (x>> (p+1-n)) & ~(~0 << n);
}

int main(){
    int x= 0b1100110101001;
    printf("%d\n",lirebits(x,7,3));
    return 0;
}