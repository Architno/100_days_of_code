#include<stdio.h>

int main(){
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c)
    {
        printf("Largest is: %d", a);
        return 0;
    }
    else if(b>a && b>c)
    {
        printf("Largest is: %d", b);
        return 0;
    }
    else
    {
        printf("Largest is: %d", c);
        return 0;
    }
}