/*Write a program to Find sum and average of
array.*/
#include<stdio.h>
int main(){
    int n,i,s=0,avg;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENT");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    avg=(s/n);
    printf("Average is: %d",avg);
    return 0;
}