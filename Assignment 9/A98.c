//Write a C program to create , initialize , assign and access a pointer variable
#include <stdio.h>
int main(){
    char ch;

    //char pointer
    char *ptr;

    //Initializing pointer variable with the address of variable ch
    ptr = &ch;

    //Assigning value to the variable ch
    ch = 'V';

    //access value and address of ch using variable ch
    printf("Value of ch: %c\n",ch);
    printf("Address of ch: %p\n",&ch);

    //access value and address of ch using pointer variable ptr
    printf("Value of ch: %c\n",*ptr);
    printf("Address of ch: %p",ptr);
    printf("\n\nVignesh Sharma\n21B037");

   return 0;
}