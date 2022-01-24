//Program to determine whether a point lies within, on, or outside the circle
#include<stdio.h>
#include<math.h>
/*If the distance between the center and the point is more than radius, it lies outside the circle and if it is equal to
the radius it lies on the circle, if it is less than the radius it lies inside.*/
int main(){
    int x,y,x1,y1;
    float k,q,r;
    printf("Enter the coordinates of the center x,y : ");
    scanf("%d %d",&x,&y);
    printf("Enter the coordinates of the point x1,y1 : ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of radius of the circle r : ");
    scanf("%f", &r);
    
    k=(pow(x-x1,2)+pow(y-y1,2));
    q=sqrt(k);

    if(q<r)
    printf("The point (%d,%d) lies within the circle",x1,y1);
    else
    if(q==r)
    printf("The point (%d,%d) lies on the circle",x1,y1); 
    else
    printf("The point (%d,%d) lies outside the circle",x1,y1);
    return 0;
}