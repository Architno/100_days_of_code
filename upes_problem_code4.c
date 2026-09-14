#include<stdio.h>

int main(){
    int area, circumference, radius;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf("area of circle: %d\n", area);
    circumference = 2 * 3.14 * radius;
    printf("circumference of circle: %d\n", circumference);
    return 0;
}