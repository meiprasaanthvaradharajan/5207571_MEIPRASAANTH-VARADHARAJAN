#include <stdio.h>

int sales_by_match(int, int*);

int sales_by_match(int n, int* arr){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j] && arr[i]!=0){
                arr[i]=0;
                arr[j]=0;
                count++;
                break;
            }
        }
    }
    return count;
}
int main(){
    int n;
    //printf("Enter the no of individual socks: ");
    scanf("%d", &n);
    int arr[n];
    //printf(Enter the Color of each sock: );
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", sales_by_match(n, arr));
    return 0;
}