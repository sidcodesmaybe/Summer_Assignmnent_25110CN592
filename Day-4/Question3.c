//Write a program to Check Armstrong number.
#include<stdio.h>
#include<math.h>
int main(){
    int b,n,t,d,s=0,c=0;
    printf("Enter the number n:");
    scanf("%d",&n);
    b=n;
    while(b>0){
        b/=10;
        c++;
    }
    t=n;
    while(t>0){
        d=t%10;
        s=s+round(pow(d,c));
        t/=10;
    }
    if(n==s)
    printf("ARMSTRONG");
    else
    printf("NOT");
    return 0;
}