//Program to generate first n terms of a fibonacci sequence
#include<stdio.h>
int main(){
    int i, n;
    int t1 = 0, t2 = 1;   // initialize first and second terms
    int nextTerm = t1 + t2;  // initialize the next term (3rd term)

    printf("Enter the number of terms you want the fibonacci sequence upto : ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
    return 0;
}