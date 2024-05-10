// C Program to Sort an array using Bubble Sort (Adaptive because of isSorted)
#include<stdio.h>
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void BubbleSort(int arr[],int n){
    int isSorted = 0;
    for(int i=0;i<n-1;i++){
        printf("Working on pass number %d\n",i+1);
        isSorted = 1;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return;
        }
    }
}
int main(){
    int arr[] = {1,5,2,2,8,4,22,8,0};
    // int arr[] = {0,1,2,2,4,5,8,8,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting : ");
    printArray(arr,n);
    BubbleSort(arr,n);
    printf("After sorting : ");
    printArray(arr,n);
}