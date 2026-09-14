#include<stdio.h>

int main(){
    float percentage;
    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    if(percentage>=90 && percentage<=100){
        printf("Grade A");
        return 0;
    }
    else if(percentage>=80 && percentage<90){
        printf("Grade B");
        return 0;
    }
    else if(percentage>=70 && percentage<80){
        printf("Grade C");
        return 0;
    }
    else if(percentage>=60 && percentage<70){
        printf("Grade D");
        return 0;
    }
    else if(percentage>=40 && percentage<60){
        printf("Grade E");
        return 0;
    }
    else if(percentage>=0 && percentage<40){
        printf("Grade F");
        return 0;
    }
    else{
        printf("Invalid percentage");
        return 0;
    }
}