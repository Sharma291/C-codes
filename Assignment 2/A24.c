//Program to check whether triangle is valid or not
#include<stdio.h>
int main(){
    int angle1,angle2,angle3,k;
    printf("Enter the value of angle 1, angle 2, angle 3 in degrees : ");
    scanf("%d %d %d",&angle1,&angle2,&angle3);

    k=angle1+angle2+angle3;

    if(k=180)
    printf("The triangle is valid and its interior angles are : %d, %d, %d",angle1,angle2,angle3);

    else
    printf("The triangle is not valid");
    return 0;
}