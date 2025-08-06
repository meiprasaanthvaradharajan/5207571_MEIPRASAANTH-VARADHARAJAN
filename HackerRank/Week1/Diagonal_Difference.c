#include <stdio.h>
#include <stdlib.h>

int diagonal_difference(int n, int arr[][n]);  //function declaration

int diagonal_difference(int n, int arr[][n]){  //function definition
    int sum1=0, sum2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                sum1 += arr[i][j];
            if((i+j) == (n-1))
                sum2 += arr[i][j];
        }
    }
    return abs(sum1-sum2);
}

int main(){
    int n;
    //printf("Enter the Number: ");
    scanf("%d",&n);
    int arr[n][n];
    //printf("Enter the Matrix elements: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d", diagonal_difference(n, arr));  //function call
}
