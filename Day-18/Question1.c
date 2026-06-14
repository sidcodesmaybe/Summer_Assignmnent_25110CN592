//Write a program to Bubble sort. 
#include<stdio.h>
int main(){
    int x,y,i,j,t,k,f,c=0;
    printf("Enter the N");
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++){
        printf("ENTER THE ELEMENT:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<x-1;i++){
        for(j=0;j<x-i-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<x;i++){
        printf("%d",a[i]);
    }
    return 0;
}