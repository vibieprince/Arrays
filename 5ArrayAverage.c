// C Program to find the average of all the elements of the array
#include<stdio.h>
int FindAverage(int arr[],int n){
    double sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    printf("%.2f",sum/(double)n);
}
int main(){
    int arr[] ={4,5,64,5,6,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    FindAverage(arr,n);
}