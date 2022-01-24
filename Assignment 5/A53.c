//Program to check whether a person is eligible for voting 
#include<stdio.h>
int main(){
    int age;
    printf("Enter the age of the person : ");
    scanf("%d",&age);

    (age>=18)?(printf("The person is eligible for voting"))
    :(printf("The person is not eligible for voting"));
    return 0;
}