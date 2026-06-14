//Write a program to Sort array in descending order.
#include<stdio.h>
int main(){
    int n,i,j,t;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENT");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}