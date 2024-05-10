// C Program to check whether the two matrices are equal or not
#include<stdio.h>
int main(){
    int matrix1[][4] = {{3,4,6,43},
                        {4,8,53,3},
                        {5,3,7,44},
                        {55,62,3,3}};
    int matrix2[][4] = {{3,4,6,43},
                        {4,8,53,3},
                        {5,3,7,44},
                        {55,62,3,3}};
    int r=4,c=4,flag =1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matrix1[i][j] != matrix2[i][j])
              flag = 0;
        }
    }
    if(flag){
        printf("Both the matrices are equal.");
    }
    else
        printf("Matrices are not equal");
}