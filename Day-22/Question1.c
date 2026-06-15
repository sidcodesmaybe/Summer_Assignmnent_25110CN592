//Write a program to Check palindrome string
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("ENTER STRING ");
    scanf("%s",s);
    char st[100];
    strcpy(st,s);
    strrev(s);
    printf("%s",s);
    if(strcmp(st,s)==0)
        printf("PALINDROME");
        else
    printf("AREN't");
    return 0;
}