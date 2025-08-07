#include <stdio.h>
#include <string.h>

void xor(char*, char*, char*, int);

void xor(char* str1, char* str2, char* res, int len){
    for(int i=0;i<len;i++) {
        res[i] = ((str1[i] - '0') ^ (str2[i] - '0')) + '0';
    }
    res[len] = '\0';
}

int main(){
    char str1[100], str2[100], res[101];
    scanf("%s %s", str1, str2);
    int l1 = strlen(str1);
    
    xor(str1, str2, res, l1);

    printf("%s\n", res);
    return 0;
}