#include <stdio.h>

int main(){
    int n1;
    int n2;

    int* num1 = &n1;
    int* num2= &n2 ;
    *num1 = 15;
    *num2 = 6;

    int s = *num1 + *num2;
    printf("sum of the two numers is : %d\n", s);
    return 0;
}