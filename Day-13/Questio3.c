/*Write a program to Find largest and smallest
element.*/
#include<stdio.h>
int main(){
    int i,n,min,max;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENT");
        scanf("%d",&a[i]);
    }
    
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){  
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("MAX: %d",max);
    printf("MIN: %d",min);
    return 0;
}