//Write a program to Check whether a number is palindrome.
#include<stdio.h>
int main(){
    int n,d,t,rev=0;
    printf("Enter the number n:");
    scanf("%d",&n);
    t=n;
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    if(rev==t)
    printf("PALINDROME");
    else
    printf("NOT");
    return 0;
}