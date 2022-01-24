//Program to print occurence of a particular digit in a number
#include<stdio.h>
int main(){
    int num,temp,digit,count,rem;
 
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter digit to search : ");
    scanf("%d",&digit);
    count=0;
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        if(rem==digit)
            count++;
        temp/=10;
    }
    printf("Total occurrence of the digit %d is: %d in the number: %d.",digit,count,num);
    return 0;
}