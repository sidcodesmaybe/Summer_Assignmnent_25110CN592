//Write a program to Convert decimal to binary
#include<stdio.h>
int main(){
    int n,d,rem,rev=0,place=1;
    printf("Enter n");
    scanf("%d",&n);
    while(n>0){
        d=n%2;
        rev = rev + (d * place); 
        place *= 10;
        n/=2;
    }
    printf("%d",rev);
    return 0;
}