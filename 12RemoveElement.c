// C Program to remove all occurences of an element in an array using functions
#include<stdio.h>
int RemoveElement(int arr[],int n,int val){
    for(int i=0;i<n;i++){
        if(arr[i] != val)
           printf("%d ",arr[i]);     
    }
}
int main(){
    int arr[] = {1,5,3,5,8,2,35,78,1,1,5,86,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int val =1;
    RemoveElement(arr,n,val);
}