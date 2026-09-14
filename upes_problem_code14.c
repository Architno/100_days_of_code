#include<stdio.h>

int main(){
    char vowel;
    printf("Enter the character: ");
    scanf("%c", &vowel);
    if(vowel=='a' || vowel=='e' || vowel=='i' || vowel=='o' || vowel=='u' 
    || vowel=='A' || vowel=='E' || vowel=='I' || vowel=='O' || vowel=='U')
    {
        printf("vowel");
        return 0;
    }
    else{
        printf("consonant");
        return 0;
    }
}