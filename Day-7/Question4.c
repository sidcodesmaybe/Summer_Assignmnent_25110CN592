//Write a program to Recursive reverse number.
#include<stdio.h>
int rev(int,int);
int rev(int a,int sum){
    if(a==0)
    return sum;
    else
    return rev(a/10,sum*10+(a%10)) ;
}
int main(){
    int n,result;
    printf("Enter the number n");
    scanf("%d",&n);
    result=rev(n,0);
    printf("%d",result);
    return 0;
}
