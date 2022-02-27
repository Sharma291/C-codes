//Program to replace all even numbers by 0 and odd by 1 in a one dimensional array
#include <stdio.h>
void readArray(int arr[], int size)
{
    int i = 0;

    printf("\nEnter elements : \n");

    for (i = 0; i < size; i++) {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i = 0;

    printf("\nElements are : ");

    for (i = 0; i < size; i++) {
        printf("\tarr[%d] : %d", i, arr[i]);
    }
    printf("\n");
}

void replaceEvenOdd(int arr[], int size)
{
    int i = 0;

    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            arr[i] = 0;
        else
            arr[i] = 1;
    }
}

int main()
{
    int arr[5];

    readArray(arr, 5);

    printf("\nBefore replacement : ");
    printArray(arr, 5);

    replaceEvenOdd(arr, 5);

    printf("\nAfter replacement : ");
    printArray(arr, 5);
    printf("\n\nVignesh Sharma\n21B037");
    return 0;
}