//Write a program to Reverse array
#include<stdio.h>
int main(){
    int n,i;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENT");
        scanf("%d",&a[i]);
    }
    printf("REVERSAL OF ARRAY:\n");
    for(i=n-1;i>=0;i--){
        printf(" %d",a[i]);
    }
    return 0;
}