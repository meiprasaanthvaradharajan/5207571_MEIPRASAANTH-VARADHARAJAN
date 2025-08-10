#include <stdio.h>
#include <limits.h>

void merge(int arr[], int l, int m, int r) {
    int n1 = m-l+1;
    int n2 = r-m;
    int left[n1], right[n2];
    for(int i=0;i<n1;i++) 
        left[i] = arr[l+i];
    for(int j=0;j<n2;j++) 
        right[j] = arr[m+1+j];

    int i=0,j=0,k=l;
    while (i<n1 && j<n2) {
        if (left[i] <= right[j]) 
            arr[k++] = left[i++];
        else 
            arr[k++] = right[j++];
    }
    while (i<n1) 
        arr[k++] = left[i++];
    while (j<n2) 
        arr[k++] = right[j++];
}

void mergesort(int arr[], int left, int right) {
    if (left<right) {
        int mid = left+(right-left)/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main(){
    int n;
    //printf("Enter the array size: ");
    scanf("%d", &n);
    int k;
    //printf("Enter the no of elements to select: ");
    scanf("%d", &k);
    int arr[n];
    //printf("Enter the aray elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    mergesort(arr, 0, n-1); // sort array
    int minDiff = INT_MAX;
    for (int i=0;i<=n-k;i++) {
        int diff = arr[i+k-1] - arr[i];
        if (diff<minDiff) {
            minDiff = diff;
        }
    }
    printf("%d\n", minDiff);
    return 0;
}