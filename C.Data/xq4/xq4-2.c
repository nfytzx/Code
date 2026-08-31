#include <stdio.h>

int main() {
    int matrix[3][3];
    int sum = 0;
    
    printf("please enter the 9 elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
  
    printf("\nthe matrix you entered is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }
 
    printf("\nSum of the main diagonal elements: %d\n", sum);
    
    return 0;
}