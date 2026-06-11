//Write a program to Rotate array right
#include<stdio.h>
int main(){
    int n,i,t;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    printf("ENTER THE ELEMENT ");
    scanf("%d",&a[i]);
}
t=a[n-1];
for(i=n-1;i>0;i--){
    a[i]=a[i-1];
}
    a[0]=t;
printf("NEW ARRAY:\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
return 0;
}