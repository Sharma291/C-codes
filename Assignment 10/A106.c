//Program to copy all elements of an array into another array
#include <stdio.h>
int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    //Calculate length of array arr1
    int length = sizeof(arr1)/sizeof(arr1[0]);
        
    //Create another array arr2 with the size of arr1.  
    int arr2[length];

    //Copying all elements of one array into another
    for (int i = 0; i < length; i++){
        arr2[i] = arr1[i];
    }

    printf("Elements of original array: \n");
    for (int i = 0; i < length; i++){
        printf("%d ", arr1[i]);
    }

    printf("\n");

    printf("Elements of new array: \n");
    for (int i = 0; i < length; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n\nVignesh Sharma\n21B037");
    return 0;
}