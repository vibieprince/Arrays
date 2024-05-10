// C Program to copy elements of one array into another array
#include<stdio.h>
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {4,5,6,4,3,5,54,4,33,58,8};
    int n = sizeof(arr)/4;
    int arr1[] = {3,3,5,3,3};
    int n1 = sizeof(arr1)/4;
    printf("Array 2 : ");
    printArray(arr,n);
    printf("(Before copying elements)");
    printf("\nArray 2 : ");
    for(int i=0;i<n+n1;i++){
        arr1[i] == arr[i];
        printf("%d ",arr1[i]);
    }
    printf("(After Copying elements)");
}
