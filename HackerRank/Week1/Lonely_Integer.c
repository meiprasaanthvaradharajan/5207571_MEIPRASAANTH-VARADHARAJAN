#include <stdio.h>
#include <stdlib.h>

int lonely_integer(int*, int);

int lonely_integer(int* arr, int n){
    int count;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
                count++;
        }
        if(count==1)
            return arr[i];
    }
    return -1;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    int res = lonely_integer(arr, n);
    printf("%d\n", res);
    return 0;
}
