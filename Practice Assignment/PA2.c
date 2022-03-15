#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the values of a,b,c,d : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    (a>b && a>c && a>d)?(printf("The largest number is %d",a))
    :(b>c && b>d)?(printf("The largest number is %d",b))
    :(c>d)?(printf("The largest number is %d",c))
    :(printf("The largest number is %d",d));
    return 0;
}