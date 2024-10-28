#include <stdio.h>
#define MAX_ROW 10
#define MAX_COL 10

int main(){
    int matrix[MAX_ROW][MAX_COL];
    int m, n;

    printf("Enter the number of rows(m) and columns(n): ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix: \n");
    for( int i=0; i<m; i++){
        for( int j=0; j<n; j++){
            printf("enter the element at %d %d:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is: \n");
     for( int i=0; i<m; i++){
        for( int j=0; j<n; j++){
            printf("%d \t", &matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}
