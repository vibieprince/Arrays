// C Program to find the transpose of a matrix
#include <stdio.h>
int main()
{
    int matrix[][4] = {{3, 4, 6, 43},
                       {4, 8, 53, 3},
                       {5, 3, 7, 44},
                       {55, 62, 3, 3}};
    int temp[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            temp[i][j] = matrix[j][i];
            // temp[i+1][j] = matrix[i][j+1]; not effiient approach
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
}