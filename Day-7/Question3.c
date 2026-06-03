//Write a program to Recursive sum of digits
#include<stdio.h>
int add(int);
int add(int a){
if(a==0)
return 0;
else
return (a%10)+add(a/10);
}
int main(){
    int x,result;
    printf("Enter value of x:\n");
    scanf("%d",&x);
    result=add(x);
    printf("RESULT:%d",result);
    return 0;
}