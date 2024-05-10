// C program to remove duplicates from a sorted array
#include<stdio.h>
void sort(int arr[],int n){
    for(int i=0 ; i<n;i++){
        for(int j=0; j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int removeDuplicates(int arr[],int n){ // works for sorted arrays only
    int temp[n],j=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1])
           temp[j++] = arr[i];
    }
    temp[j++] = arr[n-1];
    for(int i=0;i<j;i++)
       arr[i] = temp[i];
    return j;
}
int main(){
    int arr[] = {4,3,5,5,7,23,46,5,77,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    printArray(arr,n);
    n = removeDuplicates(arr,n);
    printArray(arr,n);
}