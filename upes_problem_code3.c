#include<stdio.h>

int main(){
    int length, breath;
    printf("Enter length and breath of rectangle: ");
    scanf("%d %d", &length, &breath);
    printf("area of rectangle: %d\n", length * breath);
    printf("perimeter of rectangle: %d\n", 2 * (length + breath));
    return 0;
}