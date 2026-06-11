/*Write a program to Input and display array*/
#include<stdio.h>
int main(){
    int n,i;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    printf("ENTER ELEMENTS IN ARRAY");
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}