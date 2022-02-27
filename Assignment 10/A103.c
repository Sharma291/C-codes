//Program to find number of repeated element in an array
#include<stdio.h>
int main( void ) {
    const int N = 10;

    int A[N];
    printf("Enter the elements of the array : \n");
    for(int i = 0; i < N; i++)
        scanf("%d",&A[i]);

    int seen[N];
    for(int i = 0; i < N; i++)
        seen[i] = 0;

    for(int i = 0; i < N; i++) {
        if(seen[i] == 0) {
            int count = 0;
            for(int j = i; j < N; j++)
                if(A[j] == A[i]) {
                    count += 1;
                    seen[j] = 1;
                }
            printf("%d occurs %d times \n",A[i],count);
        }
    }
    printf("\n\nVignesh Sharma\n21B037");
    return 0;
}