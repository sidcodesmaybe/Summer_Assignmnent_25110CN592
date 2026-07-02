//Write a program to Create voting eligibility system.
#include<stdio.h>
int main(){

int n;
printf("Enter your age");
scanf("%d",&n);
int t=n;
if(t>=18) {
    printf("Eligible");}
else {
    printf("Get out!");}
}