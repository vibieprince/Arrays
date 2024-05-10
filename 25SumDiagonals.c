// C Program to compute the sum of diagonals of a matrix
#include<stdio.h>
int main(){
    int matrix[4][4] = {{1,2,3,7},
                        {4,7,6,8},
                        {7,8,9,10},
                        {4,5,1,9}};
    int i,j,sum = 0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j)
               sum += matrix[i][j];
        }
    }
    printf("Sum of diagonal elements : %d",sum);
}