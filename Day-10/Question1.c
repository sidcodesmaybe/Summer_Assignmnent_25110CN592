/*Write a program to Print star pyramid.
 *
 ***
 *****
 *******
 **********/
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter N");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=((2*n)-1);j+=2){
            printf("*");
        }
        printf(" \n");
    }
    return 0;
}