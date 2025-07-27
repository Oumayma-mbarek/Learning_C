#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    int *element; //pointer to int to store the elements 

    printf("input the number of elements: \n");
    scanf("%d",&n);
    //allocate memory to store the elements
    element = (int*)calloc(n,sizeof(int));

    if (element == NULL) {
        printf(" No memory is allocated."); // If memory allocation fails
        exit(0);
    }

    for(i=0;i<n;i++){

        printf("element - %d :",i);
        scanf("%d",element+i);
    }
    int max= *element;
    for(i=1;i<n;i++){
        if(*(element +i-1)<*(element+i)){
            max=*(element+i);
        }
    }
    printf("the maximum is %d\n",max);
    return 0;
}