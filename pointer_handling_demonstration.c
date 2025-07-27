#include <stdio.h>

int main(){
    int m=29;
    int* ab = &m;
    printf("\n\n ab stores the address of m  = %p\n", ab); // Printing the address stored in ab using %p
    printf("\n *ab stores the value of m = %i\n", *ab); // Printing the value pointed to by z using *z
    
    m = 34;
    printf("\n\n ab stores the address of m  = %p\n", ab); // Printing the address stored in ab using %p
    printf("\n *ab stores the value of m = %i\n", *ab); // Printing the value pointed to by z using *z
    
    *ab=7;
    printf("\n\n ab stores the address of m  = %p\n", ab); // Printing the address stored in ab using %p
    printf("\n *ab stores the value of m = %i\n", *ab); // Printing the value pointed to by z using *z
    
    return 0;


}