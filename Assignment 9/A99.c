//C program to swap two numbers using pointers
#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int num1,num2;

    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);

    printf("Before Swapping: num1 is: %d, num2 is: %d\n",num1,num2);   //displaying numbers before swapping
    
    swap(&num1,&num2);  //calling the user defined function swap()    
    printf("After  Swapping: num1 is: %d, num2 is: %d",num1,num2);   //displaying numbers after swapping
    printf("\n\nVignesh Sharma\n21B037");
    return 0;
}

void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}