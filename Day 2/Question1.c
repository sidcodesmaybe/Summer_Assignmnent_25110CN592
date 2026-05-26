//Write a program to Find sum of digits of a number.
#include<stdio.h>
int main(){
    int n,d,s=0;
    printf("Enter the number N:");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        s+=d;
        n/=10;
    }
    printf("The sum of digits in a number is:%d",s);
    return 0;
}