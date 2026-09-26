#include<stdio.h>

int main(){
    int n, factor = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n > 0){
        for(int i = 1; i <= n; i++){
            if(n%i == 0 ){
                factor = factor + i;
            }
        }
        if(factor == 2*n){
            printf("perfect number");
            return 0;
        }
        else{
            printf("not perfect number");
        }
    }
    else{
        printf("not perfect number");
    }
    return 0;
}