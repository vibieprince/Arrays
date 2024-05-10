// C Program to add two matrices
#include<stdio.h>
int main(){
    int mat1[3][3] = {{1,2,3},
                      {4,5,6},
                      {7,8,9}};
    int mat2[3][3] = {{10,11,12},
                      {13,14,15},
                      {16,17,18}};
    int temp[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
}