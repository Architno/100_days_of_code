#include<stdio.h>

int main(){
    int a, n,i=0,t, r;
    printf("Enter the number: ");
    scanf("%d", &n);
    t = n;
    while(t>0)
    {
       r=t%10;
       i = i*10 + r;
       t=t/10;
       
    }
    if(i == n)
    {
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}