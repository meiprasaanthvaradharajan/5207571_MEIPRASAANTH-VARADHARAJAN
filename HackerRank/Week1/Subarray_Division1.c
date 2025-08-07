#include <stdio.h>

int subarray_division1(int*, int, int, int);

int subarray_division1(int* arr, int n, int d, int m){
    int count = 0;
    for (int i=0;i<=n-m;i++){
        int sum = 0;
        for (int j=0;j<m;j++){
            sum += arr[i+j];
        }
        if (sum == d)
            count++;
    }

    return count;
}

int main(){
    int s;
    //printf("Enter the no of square: ");
    scanf("%d", &s);
    int arr[s];
    //printf("Enter the Number on each square: ");
    for(int i=0;i<s;i++){
        scanf("%d", &arr[i]);
    }
    int d, m;
    //printf("Enter the Ron's birth day: ");
    scanf("%d", &d);
    //printf("Enter the Rn's birth month: ");
    scanf("%d", &m);
    
    printf("%d", subarray_division1(arr, s, d, m));
}