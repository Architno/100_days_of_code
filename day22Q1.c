#include<stdio.h>

int main(){
    int n, r, t, factorial = 1, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n>0){
        t = n;
        while(t>0){
            r = t%10;
            factorial = 1;
            for(int i = 1;i <= r;i++){
                factorial = factorial * i;
            }
            t = t/10;
            sum = sum + factorial;
        }
        if(n == sum){
            printf("strong number");
            return 0;
        }
        else{
            printf("not strong number");
        }
    }
    else{
        printf("not strong number");
    }
    return 0;
}