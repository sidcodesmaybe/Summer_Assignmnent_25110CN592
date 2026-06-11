/*Write a program to Write function for
Armstrong.*/
#include<stdio.h>
int arm(int);
int arm(int x){
    int i,d,t,s=0;
    t=x;
    while(x>0){
        d=x%10;
        s=s+d*d*d;
        x=x/10;
    }
    if(s==t)
    printf("ARMSTRONG");
    else
    printf("NOT ARMSTRONG");
    return 0;
}
int main(){
    int n,res;
    printf("ENTER N");
    scanf("%d",&n);
    res=arm(n);
    return 0;
}