// C Program to find largest Element in an Array
#include<stdio.h>
int largest(int arr[],int n){
    int max = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>max)
           max = arr[i];
    }
    return max;
}
int main(){
    int arr[] = {10,203,1,322,56,3,7,54,67};
    int n = sizeof(arr)/sizeof(arr[0]); // this finds the length of array
    // printf("%d",n);
    printf("Largest in the given array is %d ",largest(arr,n));
}