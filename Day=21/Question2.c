//Write a program to Reverse a string
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("ENTER STRING ");
    scanf("%s",s);
    char st[100];
    strrev(s);
    printf("%s",s);
    return 0;
}