//Write a program to Check perfect number.
//perfect Number--->Sum of Divisors equal to number.
#include<stdio.h>
int main(){
    int n,i,s=0;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0&&i!=n)
        s+=i;
    }
    if(s==n)
        printf("Perfect Number");
    else
    printf("NOT");
    return 0;
}
    
