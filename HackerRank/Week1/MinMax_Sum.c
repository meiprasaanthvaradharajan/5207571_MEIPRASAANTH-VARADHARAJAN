#include <stdio.h>
#include <stdlib.h>

void MinMax_Sum(int*, int);

void MinMax_Sum(int* arr, int n){
    long long int max=arr[0], min=arr[0], sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%lld %lld", sum-max, sum-min);
}

int main(){
    int* arr=NULL;
    int num, i=0, c=5;
    arr = (int*)malloc(c*sizeof(int));
    while((scanf("%d", &num)) == 1){
        if(i==c){
            c*=2;
            int* temp=realloc(arr, c*sizeof(int));
            arr=temp;
        }
        arr[i++]=num;  
    }
    MinMax_Sum(arr, i);
    free(arr);
    return 0;
}
