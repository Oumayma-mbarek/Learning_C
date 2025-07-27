#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("choose a number of elements:");
    scanf("%d",&n);
    int *element;
    element=(int*)malloc(n*sizeof(int));
    if (element == NULL) {
        printf(" No memory is allocated."); // If memory allocation fails
        exit(0);
    }
    int s=0;
    for(int i=0;i<n;i++){
        printf("element -%d : ", i+1);
        scanf("%d",element+i);
        s+= *(element +i);
    }
    printf("the sum is %d\n",s);
    free(element);
    return 0;
}