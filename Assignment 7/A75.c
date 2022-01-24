//Program to check Armstrong Number
//In an Armstrong number of n digits, the sum of nth powers of each digit is equal to the number itself.
#include<stdio.h>
#include<math.h>
int main(){
    int num, original, remainder, n = 0;
    int result = 0;
    printf("Enter an integer : ");
    scanf("%d", &num);
    original = num;

     for (original = num; original != 0; ++n) // store the number of digits of num in n 
       {original /= 10;}

   for (original = num; original != 0; original /= 10) {
       remainder = original % 10;
 
      result += pow(remainder, n);  // store the sum of the power of individual digits in result
   }
   if (result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
    return 0;
}