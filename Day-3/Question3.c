//Write a program to Find GCD of two numbers
#include<stdio.h>
int main(){
    int a,b,rem;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
    printf("%d",a);
    return 0;
}