//Program to check whether a number is positive or negative
#include <stdio.h>
int main(){
    float num;
    printf("Enter a number : ");
    scanf("%f", &num);

    if (num < 0)
        printf("The number %f is a negative number.",num);
    else
    if (num > 0)
        printf("The number %f is a positive number.",num);
    else
        printf("The entered number is 0.");
    return 0;
}