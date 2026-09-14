#include<stdio.h>

int main(){
    int sec,  min, hour, inp_sec;
    printf("Enter time in seconds: ");
    scanf("%d", &inp_sec);
    hour = inp_sec / 3600;
    min = (inp_sec % 3600) / 60;
    sec = inp_sec % 60;
    printf("%d:%d:%d\n", hour, min, sec);
    return 0;
}