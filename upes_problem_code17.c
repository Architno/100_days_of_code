#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c, D, r1, r2;
    printf("Enter the coefficient of x^2: ");
    scanf("%d", &a);
    printf("Enter the coefficient of x: ");
    scanf("%d", &b);
    printf("Enter the constant term: ");
    scanf("%d", &c);

    printf("The quadratic equation is: %dx^2 + %dx + %d=0\n", a, b, c);
    D = b*b - 4*a*c;
    printf("The discriminant is: %d\n", D);

    if(D>0)
    {
        r1 = (-b + sqrt(D)) / (2*a);
        r2 = (-b - sqrt(D)) / (2*a);
        printf("roots are real and different: %d, %d\n", r1, r2);
        return 0;
    }
    else if(D==0){
        r1 = r2 = -b/(2*a);
        printf("roots are real and same: %d, %d\n", r1, r2);
        return 0;
    }
    else{
        printf("roots are complex\n");
        return 0;
    }

}