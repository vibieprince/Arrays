// C Program to sort the 2D Array across rows
#include<stdio.h>
void sortRowWise(int arr[][5],int r,int c){
    int temp,i,j,k;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            // for(k=0;k<c-j-1;k++){
                for(k=j+1;k<c;k++){
                if(arr[i][j]>arr[i][k]){
                    temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
}
void printArray(int arr[][5],int r,int c){
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int arr[][5] = {{3,5,7,54,3},
                    {5,3,8,6,4},
                    {5,7,9,5,5},
                    {4,7,5,3,6}};
    sortRowWise(arr,4,5);
    printArray(arr,4,5);
}




