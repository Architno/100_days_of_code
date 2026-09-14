#include<stdio.h>

int main(){
    int a, b, c;
    printf("side length of triangle are: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && a ==c)
    {
        printf("Equilateral");
        return 0;
    }
    else if(a!=b && a!=c && b!=c)
    {
        printf("Scalene");
        return 0;
    }
    else
    {
        printf("Isosceles");
        return 0;
    }
}