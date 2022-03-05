// Finding sum and product of two 2x2 matrices
#include <stdio.h>

int main(){
    int a[2][2], b[2][2], p[2][2];
    printf("\nEnter the elements of First matrix A:\n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("Enter value for a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the elements of Second matrix B:\n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("Enter value for a[%d][%d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nThe matrix A is:\n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe matrix B is:\n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }



//  Sum of Matrices A and B
    printf("\nThe sum of matrices A and B is:\n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }


// Product of matrices A and B
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            p[i][j] = 0;
            for(int k = 0; k <2; k++){  
                p[i][j] = p[i][j] + a[i][k] * b[k][j];   
            }  
        }
    }
    printf("\nThe product of matrix A and B is:\n");
    for(int i = 0; i<2; i++){  
        for(int j = 0; j<2; j++){  
            printf("%d ", p[i][j]);  
        }  
        printf("\n");  
    } 
    return 0;
}