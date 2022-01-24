//Program to demonstrate logical operators
#include<stdio.h>
int main(){

    int a = 5;
    int b = 20;

    if ( a && b ) //logical AND operator
    printf("Line 1 - Condition is true\n" );
	
    if ( a || b ) //logical OR operator
    printf("Line 2 - Condition is true\n" );

    int c = 0;
    int d = 10;

	if ( c && d )
    printf("Line 3 - Condition is true\n" );
    else 
    printf("Line 3 - Condition is not true\n" );
   
    if ( !(c && d) )//logical NOT operator
    printf("Line 4 - Condition is true\n" );
    return 0;
   }