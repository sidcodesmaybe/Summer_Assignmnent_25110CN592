//Write a program to Convert binary to decimal.
#include<stdio.h>
#include<math.h>
int main(){
    int n,b,d,i,c=0,s=0;
    printf("Enter the binary number:");
    scanf("%d",&n);
    b=n;
    while(b>0){
        b/=10;
        c++;
    }
    while(n>0){
        d=n%10;
        s+=d*(pow(2,i));
        i++;
        n/=10;
    }
    printf("Decimal=%d",s);
    return 0;
}