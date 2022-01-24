//Program to print the size of variables using sizeof() operator
#include<stdio.h>
int main(){
    printf("The size of int is : %lu",sizeof(int));
    printf("\nThe size of float is : %lu",sizeof(float));
    printf("\nThe size of char is : %lu",sizeof(char));
    printf("\nThe size of double is : %lu",sizeof(double));

    return 0;
}