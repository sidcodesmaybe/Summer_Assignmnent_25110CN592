/*Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE*/
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=65;j<=(65+i-1);j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}