//C program that invokes a function isprime(num) that accepts an integer argument and returns 1
//if the argument is prime and 0 otherwise.
#include<stdio.h>
int isprime(int num);
int main(){
    int n,p;
    p = isprime(n);
    printf("%d",p);
    printf("\n\nVignesh Sharma\n21B037");
    return 0;
}

int isprime(int num){
    int a;
    scanf("%d",&num);
    int divisor = 2;
    for(;divisor<num;divisor++){
        if(num%divisor == 0){break;}
    }
    if(divisor>=num){
        a=1;
    }
else {
    a=0;
}
return a;
}