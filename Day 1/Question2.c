//Write a program to Print multiplication table of a given number
#include<stdio.h>
int main(){
    int n,i,n1,mul=1;
    printf("Enter the number N for which table is to printed:");
    scanf("%d", &n);
    printf("Enter number uptil which table has to be printed:");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++){
        mul*=i;
        printf("%d*%d=%d\n",n,i,mul);
    }
    return 0;
}