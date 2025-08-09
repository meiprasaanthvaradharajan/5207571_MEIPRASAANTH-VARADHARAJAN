#include <stdio.h>

int drawing_book(int, int);

int drawing_book(int n, int p){
    int front = p/2;
    int back = n/2 - p/2;
    if(front < back)
        return front;
    else
        return back;
}

int main(){
    int n, p;
    //printf("Enter the no of pages in book: ");
    scanf("%d", &n);
    //printf("Enter the page no to turn to: ");
    scanf("%d", &p);
    printf("%d\n", drawing_book(n, p));
    return 0;
}