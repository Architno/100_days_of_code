#include<stdio.h>

int main(){
    int a, b;
    char op;

    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    printf("Enter the operator: ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
        printf("sum is: %d", a+b);
        break;

        case '-':
        printf("difference is: %d", a-b);
        break;

        case '*':
        printf("product is: %d", a*b);
        break;

        case '/':
        if(b==0)
        {
            printf("b can't be zero");
        }
        else
        {
            printf("division is: %d", a/b);
        }
        break;

        case '%':
        if(b == 0)
        {
            printf("b can't be zero");
        }
        else
        {
            printf("remainder is %d", a%b);
        }
        break;
        default: printf("wrong input , write correct input");
    }
    return 0;
}