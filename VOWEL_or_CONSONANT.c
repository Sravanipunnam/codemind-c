#include<stdio.h>
int main()
{ 
    char ch;
    scanf("%c",&ch);
    if(ch =='a'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch =='e'||ch =='i'||ch =='o'||ch =='u')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}