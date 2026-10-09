#include<stdio.h>

int main(){
    int n = 4, sp, xp;
    for(int i = 1; i <= n; i++){
        sp = n - i;
        for(int j = 1; j <= sp; j++){
            printf(" ", j);
        }
        for(int k = 1; k <= (2*i - 1); k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i <= 3; i++){
        for(int k = 1; k <= i; k++){
            printf(" ");
    }
        for(int j = 5; j >= (2*i - 1); j--){
            printf("*");
    }
    printf("\n");
}
return 0;
}