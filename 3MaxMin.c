// C Program to find the maximum and minimum in an array
#include<stdio.h>
int* getMaxMin(int arr[],int n){
    static int arreey[2];
    arreey[0] = arr[0];
    arreey[1] = arr[0];
    for(int i =1; i<n;i++){
        if(arr[i]>arreey[0])
           arreey[0] = arr[i]; // Maximum spotted
        if(arr[i]<arreey[1])
           arreey[1] = arr[i]; // Minimum spotted
    }
    return arreey;
}
// struct pair{
    // int min,max;
// };
// struct pair MaxMin(int arr[],int n){
//     struct pair minmax;
//     if(n==1){
//         minmax.min = arr[0];
//         minmax.max = arr[0];
//         return minmax;
//     }
//     if(arr[0]>arr[1]){
//         minmax.min = arr[1];
//         minmax.max = arr[0];
//     }
//     for(int i = 2;i<n;i++){
//         if(arr[i]>minmax.max)
//            minmax.max = arr[i];
//         else if(arr[i]<minmax.min)
//            minmax.min = arr[i];
//     }
//     return minmax;
// }

int main(){
    int arr[] = {1,3,634,236,323,89};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *extreme = getMaxMin(arr,n);
    // struct pair minmax = MaxMin(arr,n);
    printf("Maximum element is %d\n",extreme[0]);
    printf("Minimum element is %d",extreme[1]);
}






