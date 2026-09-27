#include<stdio.h>

int main(){
    int n;
    float sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n<=0){
        printf("not possible");
    }
    else {
        for(int i = 2;i <= 2*n;i += 2){
            sum = sum + (float)i/(2*i-1);
        }
        printf("Approximate sum: %.2f", sum);
        return 0;
    }
    return 0;
}