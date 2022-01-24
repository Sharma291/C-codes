//Program to check if three points fall on one straight line
#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3,k,q,r;
    printf("Enter the value of x1,y1 : ");
    scanf("%d %d",&x1,&y1);

    printf("Enter the value of x2,y2 : ");    
    scanf("%d %d",&x2,&y2);  

    printf("Enter the value of x3,y3 : ");    
    scanf("%d %d",&x3,&y3);

    k=(y2-y1)/(x2-x1);
    q=(y3-y2)/(x3-x2);
    r=y1-(k*x1);

    if(k=q)
    printf("All the three points lie on the straight line y=%dx+%d",k,r);

    else
    printf("The points do not lie on the straight line");
    return 0;
}