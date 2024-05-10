// C Program for array rotation
#include<stdio.h>
int gcd(int a,int b){
    int max = ((a>b) ? a : b);
    while(max>0){
        if(a%max==0 && b%max == 0)
          break;
        max--;  
    }
    return max;
}
// void left_rotate(int arr[],int d,int n){
//     d = d %n;
//     int i,j,k,temp;
//     for(i=0; i<gcd(d,n);i++){  // d is number of places by which the array to be rotated
//         temp = arr[i];
//         j = i;
//         while(1){
//             k = j+d;
//             if(k>=n)
//                k = k-n;
//             if(k==i)
//                break;
//             arr[j] = arr[k];
//             j = k;
//         }
//         arr[j] = arr[k];
//         j = k;
//     }
//     arr[j] = temp;
// }
void RotateRight(int arr[],int d,int n){
    int i,temp;
    while(d){
        temp = arr[n-1];
        for(i=n-1;i>=1;i--)
            arr[i] = arr[i-1];
        arr[0] = temp;
        d--;
    }
}
void RotateLeft(int arr[],int d,int n){
    int i,temp;
    while(d){
        temp = arr[0];
        for(i=0;i<n-2;i++)
            arr[i] = arr[i+1];
        arr[n-1] = temp;
        d--;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {3,4,6,645,3,2,45,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array : ");
    printArray(arr,n);
    RotateRight(arr,3,n);
    printf("Array after rotation of %d places : ",3);
    printArray(arr,n);
    // RotateLeft(arr,3,n);
    // printf("Array after rotation of %d places : ",3);
    // printArray(arr,n);
}