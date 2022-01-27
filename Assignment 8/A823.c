//Program to print the following pyramid pattern(Pyramid of numbers corresponding to rows)
#include <stdio.h>  
int main(){    
    int i, j, rows, k = 0;  
    printf (" Enter a number to define the rows : ");  
    scanf ("%d", &rows);
      
    for ( i =1; i <= rows; i++)  
    { 
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");
        }    
        for ( k = 1; k <= i; k++)  
        {  
            printf ("%d   ",i);  
        }
        printf ("\n");  
    }
    return 0;
}