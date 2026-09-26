#include <stdio.h>

int main(){
    int n, r, sum, t, digit = 0, z, s;

    printf("Enter the number: ");
    scanf("%d", &n);
    t = n;
    while(t > 0)
    {
        digit++;
        t = t / 10;
    }
    s = 1;
    for(int i = 1; i < digit; i++){
        s = s * 10;
    }
    r = n % 10;
    t = n % s - r;
    z = n / s;
    sum = r * s + t + z;
    printf("Swap is %d", sum);
    return 0;
}