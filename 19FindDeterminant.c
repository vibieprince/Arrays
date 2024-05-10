// C Program to find Determinant of a matrix
#include<stdio.h>
int main(){
    int m[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int a = ((m[2][2])*(m[3][3])) - ((m[2][3])*(m[3][2]));
    int b = ((m[2][1])*(m[3][3])) - ((m[2][3])*(m[3][1]));
    int c = ((m[2][1])*(m[3][2])) - ((m[2][2])*(m[3][1]));
    int Determinant = ((m[1][1])*(a)) - ((m[1][2])*(b)) + ((m[1][3])*(c));
    printf(" Determinant of the given matrix is %d",Determinant);
}



