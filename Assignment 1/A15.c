//Finding the area of the circle by taking radius as input from user
#include<stdio.h>
int main(){
    int r;
    float a,c;
    a=3.14;
    scanf("%d",&r);

    c=a*r*r;

    printf("The area of the circle whose radius is %d ",r);
    printf(" is %f",c);
    return 0;
}