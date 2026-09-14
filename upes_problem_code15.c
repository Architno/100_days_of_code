#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z')
    {
        printf("lowercase");
        return 0; 
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Uppercase");
        return 0;
    }
    else if(ch>='0' && ch<='9')
    {
        printf("digit");
        return 0;
    }
    else
    {
        printf("special character");
    }
}