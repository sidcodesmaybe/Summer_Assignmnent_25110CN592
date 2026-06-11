/*Write a program to Print character pyramid. Microsoft, Adobe, Paytm
 A
 ABA
 ABCBA
ABCDCBA
ABCDEDCBA*/
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter N");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
            for(j=65;j<=(65+i-1);j++){
                printf("%c",j);
            }
            for(j=(65+i-2);j>=65;j--){
                printf("%c",j);
            }
        
        printf("\n");
    }
    return 0;
}