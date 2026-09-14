#include<stdio.h>

int main(){
    float C=0, F=0;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);
    F = (C * (9.0/5.0)) + 32;
    printf("temperature in fahrenheit: %.2f\n", F);
    return 0;
}