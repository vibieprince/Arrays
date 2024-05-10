// C Program to Search an element in an array (Binary Search)
#include<stdio.h>
int Search(int arr[],int n){
    int flag = -1;
    for(int i=0 ;i<6;i++){
        if(arr[i]==n)
           flag = i;
    }
    if(flag==-1){
        printf("%d is not present in the array",n);
        
    }
    else
        printf("%d is present at index %d of the array",n,flag);
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 3;
    Search(arr,n);
}