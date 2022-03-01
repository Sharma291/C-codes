//Program to find the second largest element in an array
#include<stdio.h>
int main()
{
    int a[10],n;
    int largest1,largest2,i;

    printf("enter number of elements you want in the array : ");
    scanf("%d",&n);
    printf("enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest1=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[largest1])
        {
            largest1=i;
        }
    }
    if(largest1!=0) // this condition to select another index than the largest
        largest2=0;
    else
        largest2=n-1;
    for(i=0;i<n && i != largest1 ;i++)
    {
        if(a[i]>a[largest2])
            largest2=i;
    }
    printf("Second largest number is %d ",a[largest2]);
    printf("\n\nVignesh Sharma\n21B037");
    return 0;
}