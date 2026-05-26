//Write a program to Find product of digits
#include<stdio.h>
int main(){
    int n,d,rev=0;
    long long int mul=1;
    printf("Enter the number n:");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        mul*=d;
        n/=10;
    }
    printf("The product of digits is %d", mul);
    return 0;
}