/*Write a program to Find duplicates in array*/
#include<stdio.h>
int main(){
    int n,i,j,c=0;
    printf("ENTER N:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENTS");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d",a[j]);
                break;
            }
        }
    }
   
    return 0;
}