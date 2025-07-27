#include <stdio.h>

int main(){
    int arr1[25],n,i;
    printf("input the number of elements: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("element - %d :",i);
        scanf("%d",arr1+i);
    }
    printf("the elements you entered are:\n");
    for(i=0;i<n;i++){
        printf("element - %d : %d \n",i,*(arr1+i));
    }
    return 0;
}