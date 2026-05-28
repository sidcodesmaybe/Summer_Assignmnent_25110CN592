//Write a program to Find nth Fibonacci term
#include<stdio.h>
int main(){
    int n,a,b,s=0;
    printf("Enter the number N:");
    scanf("%d",&n);
    a=0;
    b=1;
    for(int i=3;i<=n;i++){
        s=a+b;
        a=b;
        b=s;
    }
    printf("%d",s);
}