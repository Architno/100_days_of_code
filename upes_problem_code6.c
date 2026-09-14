#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the value of a, b: ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("after swapping: a = %d, b = %d\n", a, b);
    return 0;
}