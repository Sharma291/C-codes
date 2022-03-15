#include<stdio.h>
int main(){
    int num;
    printf("Enter your berth number : ");
    scanf("%d",&num);

    if(num>72 || num<1)
    printf("Invalid berth number");

    if (num % 8 == 1 || num % 8 == 4)
            printf("%d is lower berth\n", num);
             
        else if (num % 8 == 2 || num % 8 == 5)
            printf("%d is middle berth\n", num);
             
        else if(num % 8 == 3 || num % 8 == 6)
            printf("%d is upper berth\n", num);
             
        else if(num % 8 == 7)
            printf("%d is side lower berth\n", num);
             
        else
            printf("%d is side upper berth\n", num);
    return 0;
}