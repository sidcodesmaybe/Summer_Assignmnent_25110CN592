/*Write a program to Write function for perfect
number.
*/
#include<stdio.h>
int per(int);
int per(int x){
    int n,i,t,s=0;
    t=x;
    for(i=1;i<=x/2;i++){
        if(x%i==0){
            s=s+i;
        }
    }
    if(s==t)
    printf("PERFECT");
    else
    printf("NOT");
    return 0;
}
int main(){
    int a,result;
    printf("ENTER A");
    scanf("%d",&a);
    result=per(a);
    return 0;
}