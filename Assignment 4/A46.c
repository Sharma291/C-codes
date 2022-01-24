//Program to calculate sum of marks of 5 subjects and find percentage
#include<stdio.h>
 
int main() {

    int s1, s2, s3, s4, s5, sum, total;
    float percentage;
    total=150;
 
    printf("Enter marks of 5 subjects : ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
  
    sum = s1 + s2 + s3 + s4 + s5;
    printf("The total marks in 5 subjects are : %d\n", sum);
 
    percentage = (sum * 100) / total;
    printf("Percentage of marks is : %f", percentage);
 
    return 0;
}