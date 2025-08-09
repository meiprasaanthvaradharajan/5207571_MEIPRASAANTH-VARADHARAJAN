#include <stdio.h>
#include <ctype.h>

void caesar_cipher(int, char*, int);

void caesar_cipher(int n, char* str, int k){
    k = k % 26;
    for(int i=0;i<n;i++){
        if(isalpha(str[i])){
            if(isupper(str[i]))
                str[i] = (((str[i] - 'A') + k) % 26) + 'A';
            else
                str[i] = (((str[i] - 'a') + k) % 26) + 'a';
        }
    }
}

int main(){
    int n;
    //printf("Enter the length of the string: ");
    scanf("%d", &n);
    char s[n];
    //printf("Enter the string: ");
    scanf("%s", s);
    int k;
    //printf("Enter the no of rotates: ");
    scanf("%d", &k);
    caesar_cipher(n, s, k);
    printf("%s", s);
    return 0;
}