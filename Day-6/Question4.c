//Write a program to Find x^n without pow().
#include<stdio.h>
int main(){
    int n,x,i,m=1;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter N");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        m=m*x;
    }
    printf("%d",m);
    return 0;
}