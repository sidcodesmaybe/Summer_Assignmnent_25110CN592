//Write a program to Move zeroes to end.
#include<stdio.h>
int main(){
    int n,i,nz=0;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENT:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]!=0){
           a[nz] = a[i];
            nz++;
        }
    }
    for(i=nz;i<n;i++){
        a[i]=0;
    }
    for(i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}