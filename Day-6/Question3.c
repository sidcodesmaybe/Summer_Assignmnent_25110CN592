//Write a program to count set bits in a number.
#include<stdio.h>
int main(){
    int n,d,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0){
        if(n%2==1)
        c++;
        n/=2;
     }
     printf("%d",c);
     return 0;
}