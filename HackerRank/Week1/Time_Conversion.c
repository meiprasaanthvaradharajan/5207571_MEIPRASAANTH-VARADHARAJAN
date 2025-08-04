#include <stdio.h>
#include <string.h>

void time_conversion(char*);

void time_conversion(char* str){
    int hour= ((str[0] - '0')*10) + (str[1] - '0');
    int n=strlen(str);
    if(str[n-2] == 'P'){
        if(hour != 12)
            hour+=12;
    }
    else{
        if(hour == 12)
            hour=0;
    }
    str[0]=hour/10 + '0';
    str[1]=hour%10 + '0';
    str[n-2]='\0';
}

int main(){
    char str[11];
    scanf("%s", str);
    time_conversion(str);
    printf("%s", str);
}