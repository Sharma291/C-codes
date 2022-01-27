//Program to print the following pyramid pattern(Pyramid of consecutive alphabets)
#include<stdio.h>
int main(){
    int i,j,k=1,n,space;
 
    printf("Enter the no of lines : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for (space = 1; space <= n - i ; ++space)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++,k++)
        {
            printf("%c   ",(char)(k+64));
        }
        printf("\n");
    }
    return 0;
}