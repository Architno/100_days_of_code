#include<stdio.h>

int main(){
    int a,sum = 0 , r, n, d, i, product = 1, b= 0;
    printf("Ener the number: ");
    scanf("%d", &n);

    d = n;
    while(d>0)
    {
      r=d%10;
      sum++;
      d=d/10;
    }
    d = n;
    while(d>0)
    {
       a = d%10;
       product = 1;
       for(i=1;i<=sum;i++)
       {
        product = product * a;
       }
       b = b + product;
       d = d/10;
    }
    if(b == n)
    {
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}