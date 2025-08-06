#include <stdio.h>
#include <ctype.h>

int pangrams(char*, int*);

int pangrams(char* str, int* arr){
    int i=0, index=0;
    while(str[i] != '\0'){
        if(isupper(str[i])){
            index=str[i] - 'A';
            arr[index]++;
        }
        else if(islower(str[i])){
            index=str[i] - 'a';
            arr[index]++;
        }
        i++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0)
            return 0;
    }
    return 1;
}
int main(){
    char str[1000];
    //printf("Enter the string: ");
    scanf("%[^\n]", str);
    int arr[26]={0};
    int res = pangrams(str, arr);
    if(res)
        printf("pangram\n");
    else
        printf("not pangram\n");
}