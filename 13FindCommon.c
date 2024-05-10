// C Program to find common elements between two array
#include<stdio.h>
int main(){
    int arr1[] = {4,6,7,8,6,5};
    int arr2[] = {4,3,5,6,7,8,5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int result[n1+n2],k=0;
    for(int i=0; i<n1 ;i++){
        for(int j=0; j<n2 ;j++){
            if(arr1[i]==arr2[j]){
                int flag = 0;
                for(int x=0;x<k;x++){
                    if(result[x]==arr1[i])
                       flag++;
                }
                if(flag==0){
                    result[k] = arr1[i];
                    printf("%d ",result[k]);
                    k++;
                }
            } 
        }
    }
    printf("are common");
}