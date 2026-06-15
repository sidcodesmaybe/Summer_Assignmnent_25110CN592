//Write a program to Find string length without strlen().
#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j;
    char s[100];
    printf("Enter string");
    scanf("%s",&s);
    int l=strlen(s);
    printf("STRING ENTERED:\n");
    printf("%s's length:%d",s,l);
    return 0;
}