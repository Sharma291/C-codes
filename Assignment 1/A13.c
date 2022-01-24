//taking three numbers as input from user and summing them up
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("The value of a is : ");
    scanf("%d",&a);
    printf("the value of b is : ");
    scanf("%d",&b);
    printf("The value of c is : ");
    scanf("%d",&c);
    d=a+b+c;
    printf("The sum of %d %d and %d is %d",a,b,c,d);
    return 0;
}