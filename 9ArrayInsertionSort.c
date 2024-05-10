#include<stdio.h>
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void InsertionSort(int arr[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key = arr[i];
        j=i-1;
        while(j>= 0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
    int arr[] = {43,432,5,3,7,5,7,5,6,42,33};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting : ");
    printArray(arr,n);
    InsertionSort(arr,n);
    printf("After Sorting : ");
    printArray(arr,n);
}