//Program to print lower diagonal of matrix
#include <stdio.h>
int main() {
  int a[10][10],r,c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);
  
  // asssigning elements to the matrix
  printf("\nEnter matrix elements :\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }
	printf("Lower Triangular Matrix : \n");

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if(i>=j)
				printf("%d ", a[i][j]);
			else
				printf(" ");
		}
		printf("\n");
	}
    printf("\nVignesh Sharma\n21B037");
	return 0;
}