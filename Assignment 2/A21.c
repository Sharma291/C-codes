//Program to print ASCII value of a character
#include<stdio.h>
int main(){
    int a;
    char ch;
    printf("Enter the character you want the ASCII value to be printed for : ");
    scanf("%c",&ch);
    
    a=ch;
    printf("The ASCII Value of the character is : %d",a);
    return 0;
}