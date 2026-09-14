#include<stdio.h>

int main(){
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 0;i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of numbers from 0 to %d is %d\n", n, sum);
    return 0;
}