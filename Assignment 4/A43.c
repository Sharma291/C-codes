//Program to find largest among three numbers using conditional operator
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the values of a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);

    (a>b && a>c)?(printf("The largest number is %d",a))
    :(b>c)?(printf("The largest number is %d",b))
    :(printf("The largest number is %d",c));
    return 0;
}