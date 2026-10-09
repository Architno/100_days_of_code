#include<stdio.h>

int main(){
    int n = 5, sp;
    for(int i = 1; i <= n; i++){
        sp = 2*(n - i) + 1;
        if((2*i - 1) <= 5){
            for(int j = 1; j <= (2*i - 1); j++){
                printf("*\n");
            }
        }
        else if((2*i - 1) <= 9){
            for(int k = 1; k <= sp; k++){
                printf("*\n");
            }
        }
        printf("\n");     
    }
    return 0;
}
