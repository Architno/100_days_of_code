#include<stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if((n%4==0 && n%100!=0) || n%400==0){
        printf("leap year");
        return 0;
    }
    else{
        printf("not a leap year");
        return 0;
    }
}