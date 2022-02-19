//C Program to multiply two operators using plus operator
#include<stdio.h>
int main(){
    int a,b,result;
    printf("Enter numbers to multiply : ");
    scanf("%d %d",&a,&b);
    result = 0;
    for(int n=1;n<=b;n++){
        result = result + a;
    }
    printf("%d multiplied by %d gives %d",a,b,result);
    printf("\n\nVignesh Sharma\n21B037");
    return 0;
}