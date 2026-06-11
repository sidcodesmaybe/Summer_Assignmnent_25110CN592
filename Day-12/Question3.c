/*Write a program to Write function for
Fibonacci.*/
#include<stdio.h>
int fib(int);
int fib(int x){
    int i,s=0,p=0,n=1;
    printf(" %d %d",p,n);
    for(i=3;i<=x;i++){
        s=p+n;
        printf(" %d",s);
        p=n;
        n=s;
    }
    return 0;
}
int main(){
    int n;
    printf("ENTER N");
    scanf("%d",&n);
    int res=fib(10);
    return 0;
}