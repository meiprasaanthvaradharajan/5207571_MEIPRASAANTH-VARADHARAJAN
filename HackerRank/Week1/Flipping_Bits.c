#include <stdio.h>

unsigned int flipping_bits(unsigned int);

unsigned int flipping_bits(unsigned int k){
    return ~k;
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        unsigned int k;
        scanf("%u", &k);
        printf("%u\n", flipping_bits(k));
    }
    return 0;
}