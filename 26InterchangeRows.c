// C Program to Interchange Elements of First and Last in a Matrix Across Rows
#include<stdio.h>
int main(){
    int matrix[4][4] = {{1,2,3,7},
                        {4,7,6,8},
                        {7,8,9,10},
                        {4,5,1,9}};
    int i,j,temp;
    for(i=0;i<4;i++){
        temp=matrix[0][i];
        matrix[0][i]=matrix[3][i];
        matrix[3][i]=temp;
    }
    printf("Rows interchanged\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}