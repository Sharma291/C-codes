//C program to demonstrate working of goto statement
#include <stdio.h>
int main()
{
   int sum=0;
   for(int i = 0; i<=10; i++){
	sum = sum+i;
	if(i==5){
	   goto addition;  //here the program jumps directly to the addition label 
                     //mentioned below without following any commands in between
	}
   }
    printf("Something............");

   addition:
   printf("Sum = %d", sum);
   printf("\n\nVignesh Sharma\n21B037");

   return 0;
}