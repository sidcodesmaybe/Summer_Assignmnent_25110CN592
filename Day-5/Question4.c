//Write a program to Find largest prime factor
#include<stdio.h>
#define not printf("not");
int main(){
    int n,i,j,flag;
    int a[100];
    int k=0;
    printf("Enter N");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            flag=0;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                flag=1;
                break;
                }
            }
            if(flag==0){
            a[k]=i;
            k++;
            }
        }
    }
    if(k>0)
    printf("Greatest primenumber %d",a[k-1]);
    else
    not;
    return 0;
}