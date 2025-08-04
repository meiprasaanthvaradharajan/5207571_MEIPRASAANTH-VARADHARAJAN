#include <stdio.h>
#include <string.h>

void sparse_array(char[][100], int, char[][100], int, int*);

void sparse_array(char str1[][100], int n1, char str2[][100], int n2, int* arr){
    int index=0, count;
    for(int i=0;i<n2;i++){
        count=0;
        for(int j=0;j<n1;j++){
            if(strcmp(str2[i],str1[j])==0)
                count++;
        }
        arr[index++]=count;
    }
    arr[index]='\0';
}

int main(){
    int n1,n2;
    scanf("%d", &n1);
    char str1[n1][100];
    for(int i=0;i<n1;i++){
        scanf(" %s", str1[i]);
    }
    scanf(" %d", &n2);
    int arr[n2];
    char str2[n2][100];
    for(int i=0;i<n2;i++){
        scanf(" %s", str2[i]);
    }
    
    sparse_array(str1,n1,str2,n2,arr);
    
    for(int i=0;i<n2;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}