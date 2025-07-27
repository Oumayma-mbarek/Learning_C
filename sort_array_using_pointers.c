#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Input the number of elements to store in the array:\n");
    int n,tmp; 
    int *element;
    scanf("%d", &n);
    //allocate memory to store the elements
    element = (int*)calloc(n,sizeof(int));

    if (element == NULL) {
        printf(" No memory is allocated."); // If memory allocation fails
        exit(0);
    }
    printf("Input %d number of elements in the array\n",n);
    for(int i=0;i<n;i++){

        printf("element - %d :",i);
        scanf("%d",element+i);
    }
    for (int i=0;i<n;i++){
        for (int j = i + 1; j < n; j++) {
            if (*(element + i) > *(element + j)) {
                // Swap elements if they are in the wrong order
                tmp = *(element + i);
                *(element + i) = *(element + j);
                *(element + j) = tmp;
            }
        }
    }
    // Displaying the sorted array elements
    printf("\n The elements in the array after sorting : \n");
    for (int i = 0; i < n; i++) {
        printf(" element - %d : %d \n", i + 1, *(element + i));
    }

    printf("\n");
    return 0;
}