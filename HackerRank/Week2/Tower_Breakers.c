#include <stdio.h>

int tower_breakers(int, int);

int tower_breakers(int n, int m){
    if(m==1 || n%2==0)
        return 2;
    else
        return 1;
}

int main(){
    int t;
    //printf("Enter the no of testcases: ");
    scanf("%d", &t);
    while(t--){
        int n, m;
        //printf("Enter the no of towers: ");
        scanf("%d", &n);
        //printf("Enter the height of towers: ");
        scanf("%d", &m);
        printf("%d\n", tower_breakers(n, m));
    }
    return 0;
}