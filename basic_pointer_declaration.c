#include <stdio.h>

int main() {

    int m=10;
    int n,o;
    int * z= &m;

    printf(" Here is m=10, n and o are two integer variable and *z is an integer");
    printf("\n\n z stores the address of m  = %p\n", z); // Printing the address stored in z using %p
    printf("\n *z stores the value of m = %i\n", *z); // Printing the value pointed to by z using *z
    printf("\n &m is the address of m = %p\n", &m); // Printing the address of m using &m
    printf("\n &n stores the address of n = %p\n", &n); // Printing the address of n using &n
    printf("\n &o  stores the address of o = %p\n", &o); // Printing the address of o using &o
    printf("\n &z stores the address of z = %p\n\n", &z); // Printing the address of z using &z

    //to change the value of m using its pointer z
    *z= 2;
    printf("\n\n new value of m is %i\n", *z);

    return 0;

}