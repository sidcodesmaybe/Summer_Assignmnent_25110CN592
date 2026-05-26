//Write a program to Find factorial of a number.
#include<stdio.h>
int main(){
    int n,i,f=1;
    printf("Enter the number n:");
    scanf("%d",&n);
    printf("%d!=",n);
        for(i=n;i>=1;i--)
    {
        f*=i;
    if(i>1)
        printf("%dx",i);
    else
    printf("%d= %d",i,f);
}
    return 0;
}