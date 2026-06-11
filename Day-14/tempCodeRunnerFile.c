/*Write a program to find Second largest element.*/
#include<stdio.h>
int main(){
    int n,i,max,sl;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENT");
        scanf("%d",&a[i]);
    }
    max=a[0];
    sl=-1;
    for(i=0;i<n;i++){
        if(a[i]>max){
            sl=max;
            max=a[i];
        }
        else if(a[i]>sl&&a[i]!=max){
            sl=a[i];
        }
    }
    if(sl==-1)
    printf("NOT FOUND");
    else
    printf("SECOND LARGEST ELEMENT IS %d",sl);
    return 0;
}