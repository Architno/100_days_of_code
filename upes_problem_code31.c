#include<stdio.h>

int main(){
    int n, i = 0, r ,place = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    while(n>0)
    {
       r = n%2;
       i = i+(r*place);
       place = place * 10;
       n= n/2;
    }
    printf("%d", i);
    return 0;
}