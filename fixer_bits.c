#include <stdio.h>

int lirebits(__u_int x,__u_int p, __u_int n){
    return (x>> (p+1-n)) & ~(~0 << n);
}

int fixer_bit(__u_int x, __u_int p, __u_int n, __u_int y){
    __u_int b = lirebits(y,n-1,n);
    __u_int d = (b << (p-n+1)) ;
    __u_int e = ~ (~0 << (p-n+1)) ;
    __u_int c = x & e ;
    __u_int result = c | d ;
    return result;
}

int main(){
    __u_int x = 0b10101010;
    __u_int y = 0b00001111;
    __u_int p=2;
    __u_int n=3;
    printf("%d\n", fixer_bit(x,p,n,y));
    return 0;
}