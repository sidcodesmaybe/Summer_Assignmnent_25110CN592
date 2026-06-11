//Write a program to Find missing number in array.
#include<stdio.h>
int main(){
    int n,i;
    printf("ENTER N:");
    scanf("%d",&n);
    int a[n-1];
    for(i=0;i<n-1;i++){
    printf("ENTER THE ELEMENTS");
    scanf("%d",&a[i]);
    }
    int ms,es=0,as=0;
    es=((n)*(n+1)/2);
    for(i=0;i<n-1;i++){
        as+=a[i];
    }
    ms=es-as;
    printf("MISSING NUMBER:%d",ms);
    return 0;
}