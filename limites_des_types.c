#include <stdio.h>
#include <limits.h>

int main(){

    //limits of types using limits.h 

    printf("max signed char is %d, min signed char is %d\n", SCHAR_MAX, SCHAR_MIN);
    printf("max unsigned char is : %u\n", UCHAR_MAX);
    printf("max signed short is: %d, min signed short is: %d\n", SHRT_MAX,SHRT_MIN);
    printf("max unsigned short is: %u\n", USHRT_MAX);
    printf("max signed int is : %d, min signed int is : %d\n", INT_MAX, INT_MIN);
    printf("max unsigned int is :%u\n", UINT_MAX);
    printf("max signed long is : %ld, min signed long is: %ld\n",LONG_MAX , LONG_MIN);
    printf("max unsigned long is : %lu\n", ULONG_MAX);

    //limits of types using operations
    // CHAR
    int bits_char = sizeof(char) * 8;
    signed char max_schar = (1 << (bits_char - 1)) - 1;
    signed char min_schar = -(1 << (bits_char - 1));
    unsigned char max_uchar = (1U << bits_char) - 1;

    printf("Signed char : min = %d, max = %d\n", min_schar, max_schar);
    printf("Unsigned char : max = %u\n", max_uchar);

    // SHORT
    int bits_short = sizeof(short) * 8;
    signed short max_sshort = (1 << (bits_short - 1)) - 1;
    signed short min_sshort = -(1 << (bits_short - 1));
    unsigned short max_ushort = (1U << bits_short) - 1;

    printf("Signed short : min = %d, max = %d\n", min_sshort, max_sshort);
    printf("Unsigned short : max = %u\n", max_ushort);

    // INT
    int bits_int = sizeof(int) * 8;
    int max_sint = (1 << (bits_int - 1)) - 1;
    int min_sint = -(1 << (bits_int - 1));
    unsigned int max_uint = ~0U;

    printf("Signed int : min = %d, max = %d\n", min_sint, max_sint);
    printf("Unsigned int : max = %u\n", max_uint);

    // LONG (on utilise long long pour éviter l'overflow)
    int bits_long = sizeof(long) * 8;
    long max_slong = (1L << (bits_long - 1)) - 1;
    long min_slong = -(1L << (bits_long - 1));
    unsigned long max_ulong = ~0UL;

    printf("Signed long : min = %ld, max = %ld\n", min_slong, max_slong);
    printf("Unsigned long : max = %lu\n", max_ulong);

   return 0;
}