#include<stdio.h>

int main(){
    int n, fine;
    printf("number of days: ");
    scanf("%d", &n);

    if(&n>0 && n<=5){
        fine = 2*n;
        printf("Fine rs %d", fine);
        return 0;
    }
    else if(n>5 && n<=10)
    {
        fine = 4*(n-5) + 10;
        printf("fine rs %d", fine);
        return 0; 
    }
    else if(n>10 && n<30)
    {
        fine = 6*(n-10) + 30;
        printf("fine rs %d", fine);
        return 0;
    }
    else if(n>30)
    {
        printf("membership cancelled");
    }
    else{
        printf("invalid input , days can't be negative or zero");
        return 0;
    }
}