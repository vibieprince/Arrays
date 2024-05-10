// C Program to Sort an Array using Merge Sort
#include<stdio.h>
void MergeSort(int arr[],int low,int mid,int high){
    int i,j,k,b[100];
    i = low;
    j = mid + 1;
    k = low;
    while(i<=mid && j<= high){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;k++;
        }
        else{
            b[k] = arr[j];
            j++;k++;
        }
    }
    while(i<=mid){
        b[k] = arr[i];
        k++;i++;
    }
    while(j<=high){
        b[k] = arr[j];
        k++;j++;
    }
    for(int i = low;i<=high;i++){
        arr[i] = b[i];
    }
}
// Recusrsive Merge Sort
void Merge(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid = (low+high)/2;
        Merge(arr,low,mid);
        Merge(arr,mid+1,high);
        MergeSort(arr,low,mid,high);
    }
}

int printArray(int arr[],int n){
    for(int i=0; i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {1,5,2,88,342,25,0,21,78};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting : ");
    printArray(arr,n);
    Merge(arr,0,8);
    printf("After Sorting : ");
    printArray(arr,n);
    return 0;
}