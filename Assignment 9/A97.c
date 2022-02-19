//C program to find factorial of a number using recursion
#include<stdio.h>
int factorial(int number);

int main(){
    int a;
    printf("Enter a number to find factorial : ");
    scanf("%d",&a);
    printf("%d! = %d",a,factorial(a));
    printf("\n\nVignesh Sharma\n21B037");
    return 0;
}

int factorial(int number){
    if(number == 1||number == 0){
        return 1;
    }
    else{
        return(number*factorial(number-1));
    }
}