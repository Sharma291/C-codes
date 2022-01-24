//Program to check whether a number is even or odd
#include<stdio.h>
int main(){
    int z;
    printf("Enter an integer : ");
    scanf("%d", &z);

    if(z % 2 == 0)
    printf("%d is an even number.", z);
    else
    printf("%d is an odd number.", z);
    return 0;
}