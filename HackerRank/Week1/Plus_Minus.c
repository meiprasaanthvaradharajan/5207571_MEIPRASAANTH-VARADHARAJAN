#include <stdio.h>

void plusMinus(int, int*);

void plusMinus(int n, int* arr){
    int neg=0, pos=0, zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg+=1;
        }
        else if(arr[i]>0){
            pos+=1;
        }
        else {
            zero+=1;
        }
    }
    printf("%f\n%f\n%f\n", (float)pos/n, (float)neg/n, (float)zero/n);
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
    plusMinus(n, arr);
    return 0;
}
