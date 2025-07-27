#include <stdio.h>

int main(){
    int fno,sno, *ptr1,*ptr2,max;
    fno=6;
    sno=9;
    ptr1=&fno;
    ptr2=&sno;

    if(*ptr1 > *ptr2){
        printf("%d is the maximum\n",*ptr1);
    }
    else{
        printf("%d is the maximum\n", *ptr2);
    }
    return 0;
}