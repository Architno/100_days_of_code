#include<stdio.h>

int main(){
    int i, n, product=1;
    printf("Enter the number: ");
    scanf("%d", &n);

        for(i=2;i<=n;i+=2)
        {
            product = product * i;
        }
        printf("product is: %d", product);        
        return 0;
    }        