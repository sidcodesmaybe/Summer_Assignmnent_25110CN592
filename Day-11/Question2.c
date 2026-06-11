/*Write a program to write function to find
maximum*/
#include<stdio.h>
int max(int,int);
int main(){
    int n,result,a,b;
printf("ENTER A:");
    scanf("%d %d",&a);
    printf("ENTER A:");
    scanf("%d %d",&b);
    result=max(a,b);
    return 0;
}
int max(int x,int y){
    scanf("%d %d",&x,&y);
    if(x>y)
    printf("%d" ,x);
    else
    printf("%d",y);
}
