//Write a program to Check whether a number is prime.
#include<stdio.h>
int main(){
    int n,i,flag=0;
    printf("Enter the number N:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0)
        flag=1;
        else
        flag=0;
    }
    if(flag==0)
    printf("PRIME");
    else
    printf("NOT");
    return 0;
}