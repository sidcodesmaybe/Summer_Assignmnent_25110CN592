/*Write a program to Write function to find sum
of two numbers.*/
#include<stdio.h>
int add(int,int);
int add(int a,int b){
    int sum=0;
    sum=a+b;
    printf("Sum is:%d",sum);
}
int main(){
    int res,x,y;
    printf("Enter X:");
    scanf("%d",&x);
     printf("Enter Y:");
    scanf("%d",&y);
    res=add(x,y);
    return 0;
}