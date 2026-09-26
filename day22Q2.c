#include<stdio.h>

int main(){
    int n;
    float sum = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n<0){
        printf("not possible");
    }
    else if(n == 1){
        printf("Approximate sum: 1");
    }
    else if(n>1){
        for(float i = 3;i<=2*n;i += 2){
            sum = sum + (float)i/(i+1);
        }
        printf("Approximate sum: %.1f", sum);
        return 0;
    }
    return 0;
}