#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n>=0){
        if(n>0)
        {
            printf("positive");
            return 0;
        }
        else{
            printf("zero");
            return 0;
        }
    }
    else{
        printf("negative");
        return 0;
    }
}