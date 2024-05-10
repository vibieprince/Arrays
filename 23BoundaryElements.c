// C Program to display boundary elements of a matrix
#include<stdio.h>
int main(){
    int matrix[4][4] = {{1,2,3,7},
                        {4,5,6,8},
                        {7,8,9,10},
                        {4,5,1,9}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0 || j==0 || i==3 || j==3){
                printf("%d ",matrix[i][j]);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}