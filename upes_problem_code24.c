#include<stdio.h>

int main(){
    int units, bill;
    printf("Enter the units: ");
    scanf("%d", &units);

    if(units>0 && units <= 100)
    {
        bill = 5*units;
        printf("bill: rs %d", bill);
    }
    else if(units>100 && units<=200)
    {
        bill = 7*(units-100) + 500;
        printf("bill: rs %d", bill); 
    }
    else if(units>200 && units<=300)
    {
        bill = 10*(units-200) + 1200;
        printf("bill: rs %d", bill);
    }
    else if(units>300)
    {
    bill = 12*(units - 300) + 2200;
    printf("bill: rs %d", bill);
    }
    else
    {
        printf("invalid input");
    }
    return 0; 
}