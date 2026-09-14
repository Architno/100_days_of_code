#include<stdio.h>

int main(){
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n<=1)
    {
        printf("not prime");
    }
    else if(n==2)
    {
        printf("prime");
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                printf("not prime");
                return 0;
            }
        }
        if(i==n)
        {
            printf("prime");
        }
    }
    return 0;
}