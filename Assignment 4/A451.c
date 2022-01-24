//Program to demostrate bitwise operators
#include <stdio.h>
int main(){
    int x = 16;	  
    int y = 18;
    int z;     

    z =x & y;       
    printf("Bitwise AND Operator - x & y = %d\n", z );

    z = x | y;       
    printf("Bitwise OR Operator - x | y = %d\n", z );

    z= x^y;       
    printf("Bitwise XOR Operator- x^y= %d\n", z);

    z = ~x;          
    printf("Bitwise Complement Operator - ~x = %d\n", z);

    z = x << 2;     
    printf("Bitwise Left Shift Operator x << 2= %d\n", z );

    z= x >> 2;     
    printf ("Bitwise Right Shift Operator x >> 2= %d\n", z );
    return 0;
    }