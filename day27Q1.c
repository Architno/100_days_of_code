#include<stdio.h>

int main(){
    int n = 5, sp;
    
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= (2*i -1); j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i <= 4; i++){
        sp = 2*(n - i) - 1;
        for(int k = 1; k <= sp; k++){
            printf("*");
        }
        printf("\n");
}
return 0;
}