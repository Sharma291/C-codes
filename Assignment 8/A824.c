//Program to print the following pyramid pattern(Pyramid of consecutive numbers)
#include<stdio.h>
int main(){
    int i,j,k=1,n,space;
    printf("Enter the no of lines : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for (space = 1; space <= n - i + 1; ++space)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++,k++)
        if(k<=10)
        {
            printf("%d   ",k);
        }
        else if (k>10){
            printf("%d  ",k);
        }
        printf("\n");
    }
    return 0;
}