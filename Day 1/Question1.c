//Write a program to Calculate sum of first  N natural numbers.
#include<stdio.h>
int main(){
    int N,i,sum=0;
    printf("Enter the number N:");
    scanf("%d", &N);
    for(i=1;i<=N;i++){
        sum+=i;
    }
    printf("The sum of numbers uptil N is:%d",sum);
    return 0;
}