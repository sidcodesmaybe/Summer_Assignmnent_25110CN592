//Write a program to Write function to check prime.
#include<stdio.h>
int prime(int);
int prime(int x){
    int i,c=0;
    for(i=2;i<=x/2;i++){
        if(x%i==0){
            c++;
        }
        if(c==1){
            printf("PRIME");
        }
        else
        printf("NOT PRIME");
    }
    return 0;
}
int main(){
    int n,res;
    printf("ENTER N:");
    scanf("%d",&n);
    res=prime(n);
    return 0;
}