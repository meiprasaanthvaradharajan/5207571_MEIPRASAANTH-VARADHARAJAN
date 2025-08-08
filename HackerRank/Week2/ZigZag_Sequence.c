#include <stdio.h>
#include <stdlib.h>

void findZigZagSequence(int*, int);
void sort(int*, int);

void sort(int* arr, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void findZigZagSequence(int arr[], int n){
    int i;
    sort(arr, n);
    int mid = (n-1)/2;          
    int temp = arr[mid];
    arr[mid] = arr[n-1];
    arr[n-1] = temp;
    int s1 = mid+1;
    int s2 = n-2;                 
    while (s1 <= s2) {
        temp = arr[s1];
        arr[s1] = arr[s2];
        arr[s2] = temp;
        s1++;
        s2--;
    }

    for (i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int t, n;
    //printf("Enter the no of test cases: ");
    scanf("%d", &t); 
    while(t--){
        //printf("Enter the array length: ");
        scanf("%d", &n);
        int arr[n];
        //printf("Enter the array elements: ");
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        findZigZagSequence(arr, n);
    }
    return 0;
}

