#include <stdio.h>

int permuting_two_arrays(int , int , int* , int*);
void sort_asc(int , int*);
void sort_dsc(int , int*);

void sort_asc(int n, int* arr1){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr1[i]>arr1[j]){
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
}

void sort_dsc(int n, int* arr2){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr2[i]<arr2[j]){
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }
}

int permuting_two_arrays(int n, int k, int* arr1, int* arr2){
    sort_asc(n, arr1);
    sort_dsc(n, arr2);
    for(int i=0;i<n;i++){
        if(arr1[i]+arr2[i] < k)
            return 0;
    }
    return 1;
}

int main(){
    int q;
    //printf("Enter the no of Queries: ");
    scanf("%d", &q);
    for(int i=0;i<q;i++){
        int n, k;
        //printf("Enter the array size and K value: ");
        scanf("%d%d", &n, &k);
        int A[n], B[n];
        //printf("Enter the array1 elements: ");
        for(int i=0;i<n;i++){
            scanf("%d", &A[i]);
        }
        //printf("Enter the array2 elements: ");
        for(int i=0;i<n;i++){
            scanf("%d", &B[i]);
        }
        
        int res = permuting_two_arrays(n, k, A, B);

        if(res==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}