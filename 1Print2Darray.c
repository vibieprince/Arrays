// C Program to Print a 2D Array
#include<stdio.h>
const int M = 3;
const int N = 3;
// When both dimensions are available globally
void print2DArray(int arr[M][N]){
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            printf("%d ",arr[i][j]);
        }
    }
    printf("\n");
}
// When only one dimension is available globally
const int M1 = 3;
void print2DArray1(int arr[][M1],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<M1;j++){
            printf("%d ",arr[i][j]);
        }
    }
}
int main(){
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    print2DArray(arr);
    print2DArray1(arr,3);
    return 0;
}