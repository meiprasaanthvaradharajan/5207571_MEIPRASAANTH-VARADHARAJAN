#include <stdio.h>

void counting_sort1(int, int*, int*);  //function declaration

void counting_sort1(int n, int* arr, int* res){ // function definition
    for(int i=0;i<n;i++){
        res[arr[i]] += 1;
    }
}

int main(){
    int n;
    //printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    //printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int result[100]={0};

    counting_sort1(n, arr, result);  //function call

    for(int i=0;i<100;i++){
        printf("%d ", result[i]);
    }
}