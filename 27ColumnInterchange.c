// C Program to Interchange Elements of First and Last in a Matrix Across Rows
#include<stdio.h>
int main(){
    int matrix[4][4] = {{2,5,7,8},
                        {4,7,2,9},
                        {5,9,3,9},
                        {2,8,0,3}};
    int i,j,temp;
    for(i=0;i<4;i++){
        temp=matrix[i][0];
        matrix[i][0] = matrix[i][3];
        matrix[i][3] = temp;
    }
    printf("Column Interchanged\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}