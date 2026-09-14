#include<stdio.h>
#include<math.h>

int main(){
    float P, R, T;
    float SI, CI;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &P, &R, &T);

    SI = (P * R * T) / 100.0;
    CI = P * (pow((1 + (R / 100.0)), T)) - P;
    printf("simple interest is: %.2f\n", SI);
    printf("compound interest is: %.2f\n", CI);
    return 0;
}