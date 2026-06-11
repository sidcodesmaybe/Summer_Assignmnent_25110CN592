/*Write a program to Write function to find
factorial.*/
#include<stdio.h>
int fact(int);
int fact(int x){
    int i,mul=1;
    for(i=1;i<=x;i++){
        mul*=i;
    }
    printf("FACtorial is %d",mul);
    return 0;
}
int main(){
    int n,res;
    printf("Enter N");
    scanf("%d",&n);
    res=fact(n);
}