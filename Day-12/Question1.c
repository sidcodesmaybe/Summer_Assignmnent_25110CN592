/*Write a program to Write function for
palindrome.*/
#include<stdio.h>
int rev(int);
int rev(int x){
    int i,d,ulta=0,t;
    t=x;
    while(x>0){
        d=x%10;
     ulta=ulta*10+d;
        x=x/10;
    }
    printf("Reverse is %d",t);
    if(ulta==t)
    printf("PALINDROME");
    else
    printf("NOT PALINDROME");
    return 0;
}
int main(){
    int n,res;
    printf("Enter N:");
    scanf("%d",&n);
    res=rev(n);
    return 0;
}