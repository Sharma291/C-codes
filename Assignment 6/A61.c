//Program to check whether a year is a leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year%100 != 0)||(year % 400 == 0))
    //The century years which are divisible by 100 but not by 400 are
    //not considered leap years.
    printf("The year %d is a leap year",year);

    else
    printf("The year %d is not a leap year",year);
    return 0;
}