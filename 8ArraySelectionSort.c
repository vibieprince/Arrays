// C Program to Sort an array using selection sort
#include<stdio.h>
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void selectionSort(int arr[],int n){
    int MinIndex,temp;
    for(int i=0;i<n-1;i++){
        MinIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[MinIndex]){
               MinIndex = j;
            }
        }
        // we are swapping the numbers after finding the lesser number
        int temp = arr[i];
        arr[i] = arr[MinIndex];
        arr[MinIndex] = temp;
    }
}
int main(){
    int arr[] = {3,885,32,234,5,6,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting : ");
    printArray(arr,n);
    selectionSort(arr,n);
    printf("After Sorting : ");
    printArray(arr,n);
    return 0;
}