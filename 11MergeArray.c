// C Program to merge two arrays 
#include<stdio.h>
int main(){
    int arr1[] = {3,5,7,5,4,7,3,07,5,43,3};
    int arr2[] = {3,84,5,98,3,567,86,3};
    int n1 = sizeof(arr1)/arr1[0];
    int n2 = sizeof(arr2)/arr2[0];
    int result = n1 + n2;
    int arr[result];
    for(int i=0;i<result;i++){
        arr[i] = arr1[i];
    }
    for(int j=0;n1=j<result;j++){
        arr[j] = arr2[j];
    }
    printf("{ ");
    for(int i=0;i<result-5;i++){   
        printf("%d ",arr[i]);   
    }
    printf("}");
}