//Write a program to Check strong number
#include<stdio.h>
int main(){
    int n,i,t,b,d,c=0,f,s=0;
    printf("ENTER N");
    scanf("%d",&n);
    b=n;
    while(b>0){
        d=b%10;
        {
            f=1;
            for(i=1;i<=d;i++){
                f*=i;
            }
        }
        s+=f;
        b=b/10;
    }
    if(s==n)
    printf("STRONG");
    else
    printf("NOT");
    return 0;

}